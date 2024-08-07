#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *prev;
    node *next;
    node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList
{
public:
    node *head;
    node *tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtEnd(int val)
    {
        node *new_node = new node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        // return;
    
    }
    void DeleteAtposition(int k)
    {
        node* temp=head;
        int counter=1;
        while(counter<k)
        {
            temp=temp->next;
            counter++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);

    }
};
  int main()
    {
        DoublyLinkedList dll;
        dll.insertAtEnd(1);
        dll.insertAtEnd(2);
        dll.insertAtEnd(3);
        dll.insertAtEnd(4);
        dll.display();
        dll.DeleteAtposition(3);
        dll.display();
        return 0;
    }
