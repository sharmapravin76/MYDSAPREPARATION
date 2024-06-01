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
class CircularLinkedList
{
public:
    node *head;
    CircularLinkedList()
    {
        head = NULL;
    }
    void display()
    {
        node *temp = head;
        do
        {
            /* code */
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void printCircular()
    {
        node *temp = head;
        for (int i = 0; i < 15; i++)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtStart(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // circular linked list
            return;
        }
        node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        // now tail is pointint to the last node
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
};

int main()
{
    CircularLinkedList cll;
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();
    cll.printCircular();

    return 0;
}