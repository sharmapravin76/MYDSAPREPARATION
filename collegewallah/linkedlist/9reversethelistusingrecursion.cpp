#include <iostream>
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
node* reverselinklistusingrecursion(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
        
    }
 node* new_head=reverselinklistusingrecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;

}

int main()
{
    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.head=reverselinklistusingrecursion(ll.head);
    ll.display();

    return 0;
}


