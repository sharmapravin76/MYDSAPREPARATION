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
bool ispalindrome(node *head, node *tail)
{
    while (head != tail && tail != head->prev)
    {
        if (head->val != tail->val)
        {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}
int main()
{

    
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(3);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1); 
    dll.display();
    cout << ispalindrome(dll.head, dll.tail) << endl;
    return 0;
}