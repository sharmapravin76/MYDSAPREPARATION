// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *next;
//     node(int data)
//     {
//         val = data;
//         next = NULL;
//     }
// };
// class Linkedlist
// {
// public:
//     node *head;

//     Linkedlist()
//     {
//         head = NULL;
//     }

//     void insertAtTail(int value)
//     {
//         node *new_node = new node(value);
//         if (head == NULL) // linkedlist is empty
//         {
//             head = new_node;
//             return;
//         }
//         node *temp = head;
//         while (temp->next != NULL)
//         {
//             /* code */
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }
//     void display()
//     {
//         node *temp = head;
//         while (temp != NULL)

//         {
//             /* code */
//             cout << temp->val << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
//     };
//     void deleteAlternateNodes(node *&head)
//     {
//         node *curr_node = head;
//         while (curr_node != NULL && curr_node->next != NULL)
//         {
//             node *temp = curr_node->next;
//             curr_node->next = curr_node->next->next;
//             free(temp);
//             curr_node = curr_node->next;
//         }
//     }

// int main()
// {
//     Linkedlist ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();
//     deleteAlternateNodes(ll.head);
//     ll.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertattail(int value)
    {
        Node* new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

void display()
{
Node* temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<"->";
    temp=temp->next;
}
cout<<"NULLL"<<endl;
}
};
void deleteAlternateNode(Node *&head)
{
    Node *curr_node = head;
    while (curr_node != NULL && curr_node->next != NULL)
    {
        Node *temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}


int main()
{
    LinkedList ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.insertattail(7);
    ll.insertattail(8);
    ll.display();
    deleteAlternateNode(ll.head);
    ll.display();

    return 0;
}