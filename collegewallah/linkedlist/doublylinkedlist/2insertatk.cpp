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
        cout<< endl;
    }
    void insertAtStart(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
};
int main()
{

    node *new_node = new node(3);
    DoublyLinkedList dll;
    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();

    return 0; 
}