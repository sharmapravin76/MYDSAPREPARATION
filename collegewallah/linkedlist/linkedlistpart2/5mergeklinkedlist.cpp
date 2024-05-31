#include <iostream>

#include <vector>

#include <algorithm>
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
node *mergeLinkedLists(node *&head1, node *&head2)
{
    node *dummyHeadNode = new node(-1);
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = dummyHeadNode;
    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if (ptr1)
    {
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }
    return dummyHeadNode->next;
}

node *mergeKLinkedlist(vector<node *> &lists)
{
    if (lists.size() == 0)
    {
        return NULL;
    }
    while (lists.size() > 1)
    {
        node *mergeHead = mergeLinkedLists(lists[0], lists[1]);
        lists.push_back(mergeHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}

int main()
{
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.display();
    Linkedlist ll2;
    ll2.insertAtTail(4);
    ll2.insertAtTail(5);
    ll2.insertAtTail(9);
    ll2.display();
    Linkedlist ll3;
    ll3.insertAtTail(6);
    ll3.insertAtTail(7);
    ll3.display();
    vector<node *> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);
    Linkedlist mergell;
    mergell.head = mergeKLinkedlist(lists);
    mergell.display();

    return 0;
}