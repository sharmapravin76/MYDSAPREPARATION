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
// assuminng k is always less than/equal length of linked list
void removekthelementfromend(node *&head, int k)
{
    node *ptr1 = head;
    node *ptr2 = head;
    int count = k;
    // move ptr2 by k steps ahead
    
    while (count--)
    {
        ptr2 = ptr2->next;
    }

    if(ptr2==NULL){ //k is equal to length of linked list
    //we have to delete head node
    node* temp=head;
    head=head->next;
    free(temp);
    return;
    }

    // now ptr2 is k steps ahead of ptr1
    // when ptr2 is at null (end of list),ptr will be at node to be deleted
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    node *temp = ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
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
    
  removekthelementfromend(ll1.head,3);
    ll1.display();
    

    return 0;
}