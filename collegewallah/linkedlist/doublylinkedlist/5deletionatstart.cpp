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
    // void insertAtPosition(int val, int k)
    // {
    //     // assuming k is less or equal to length of doubly linled list
    //     node *temp = head;
    //     int count = 1;
    //     while (count < (k - 1))
    //     {
    //         temp = temp->next;
    //         count++;
    //     }
    //     // temp will be pointing to the node at (k-1)th position
    //     node *new_node = new node(val);
    //     new_node->next = temp->next;
    //     temp->next = new_node;
    //     new_node->prev = temp;
    //     new_node->next->prev = new_node;
    //     return;
    // }

    void deleteAtstart()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        head = head->next;
        if (head == NULL) // if doubly linked list had only 1 node

        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }
};
    int main()
    {

        DoublyLinkedList dll;
        dll.insertAtEnd(1);
        dll.display();
        dll.insertAtEnd(2);
        dll.display();
        dll.insertAtEnd(3);
        dll.display();
        // dll.insertAtPosition(4, 3);
        // dll.display();
        dll.deleteAtstart();
        dll.display();
        return 0;
    }
