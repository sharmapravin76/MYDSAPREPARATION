// removing cycle using floyr algorithm
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
bool detectcycle(node *head)
{
    if (!head)
    {
        return false;
    }
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void removecycle(node *&head) // assuming that the linked list has a cycle
{
    node *slow = head;
    node *fast = head;
    do
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        /* code */
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main()
{
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);

    // ll1.display();
    ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
    // node *middlenode = detectcycle(ll1.head);
    cout << detectcycle(ll1.head) << endl;
    removecycle(ll1.head);
    cout << "after removing cycle" << endl;
    cout << detectcycle(ll1.head) << endl;
    ll1.display();

    return 0;
}