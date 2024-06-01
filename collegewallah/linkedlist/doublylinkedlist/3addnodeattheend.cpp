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
        return;
    }
};
int main()
{

    node *new_node = new node(3);
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.display();
    dll.insertAtEnd(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();

    return 0;
}