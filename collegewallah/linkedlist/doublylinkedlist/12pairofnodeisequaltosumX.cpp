#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
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
};
vector<int> pairSumDll(node *head, node *tail, int x)
{
    vector<int> ans(2, -1);
    while (head != tail)
    {
        int sum = head->val + tail->val;
        if (sum == x)
        {
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }
        if (sum > x) // i need smaller values, i will move my tail back
        {
            tail = tail->prev;
        }
        else
        { // i need bigger values,i will move head forward
            head = head->next;
        }
    }
        return ans;   
}
int main()
{

    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6); 
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);
    dll.display();
    vector<int> ans = pairSumDll(dll.head, dll.tail, 11);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}