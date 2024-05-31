// input=1->2->3->4->5->6

// output=1->3->5->2->4->6


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
node* oddevenlinkedlist(node* &head)
{
    if(!head)
    {
        return head;
    }
    node* evenhead=head->next;
    node* oddptr=head;
    node* evenptr=evenhead;
     while(evenptr&& evenptr->next)
     {
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;
        oddptr=oddptr->next;
        evenptr=evenptr->next;
     }

     oddptr->next=evenhead;
     return head;
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
    ll1.head =oddevenlinkedlist(ll1.head);
    ll1.display();
    return 0;
}
 
// TC=O(n)