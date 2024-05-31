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
node *rotatebyk(node *&head, int k)
{
    // 1.find lenth of linklist
    int n = 0;
    // 2.find tail node
    node *tail = head;
    while (tail->next)

    {
        n++;               // finding length
        tail = tail->next; // finding last node
    }
    n++; // for including last node
    k = k % n;
    if (k == 0)
    {
        return head;
    }
    tail->next = head;

    node *temp = head;
    for (int i = 1; i < n - k; i++)

    {
        temp = temp->next;
    }
    // temp is now pointing to(n-k)th node
    node *newhead = temp->next;
    temp->next = NULL;
    return newhead;
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
    ll1.display();
    ll1.head = rotatebyk(ll1.head, 3);
    ll1.display();
    return 0;
}


// tc-O(2n-k)