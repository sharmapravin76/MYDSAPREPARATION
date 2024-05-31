// pattern:slow fast pointer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
class Linkedlist
{
public:
    node *head;

    Linkedlist()
    {
        head = NULL;
    }

    void insertAtTail(int value)

    {
        node *new_node = new node(value);
        if (head == NULL) // linkedlist is empty
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            /* code */
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)

        {
            /* code */
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
bool ispalindrome(node *head)

{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is pointing to middle element
    // 2.break the linked list in the middle
    node *curr = slow->next;
    node *prev = slow;
    slow->next = NULL;
    // 3 reverse the second half of the linked list
    while (curr)

    {
        node *nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    // 4 check if the two linkedlist are equal
    node *head1 = head;
    node *head2 = prev;
    while (head2)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2); 
    ll1.insertAtTail(3);
    ll1.insertAtTail(2);
    ll1.insertAtTail(1);
    ll1.display();
    cout << ispalindrome(ll1.head) << endl;
    return 0;
}