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
void deletesameneighbour(node *&head, node *&tail)
{
    node *currnode = tail->prev; // second last node
    while (currnode != head)
    {
        node *prevnode = currnode->prev;
        node *nextnode = currnode->next;
        if (prevnode->val == nextnode->val)
        {
            // i need to delete the curr node
            prevnode->next = nextnode;
            nextnode->prev = prevnode;
            free(currnode);
        }
        currnode = prevnode;
    }
}
int main()
{
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1); 
    dll.display();
    deletesameneighbour(dll.head, dll.tail);
    dll.display();
    return 0;
}