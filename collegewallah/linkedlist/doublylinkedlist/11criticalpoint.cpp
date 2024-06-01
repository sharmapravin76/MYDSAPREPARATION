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
        return;
    }
};
bool isCriticalpoint(node *&currnode)
{
    if (currnode->prev->val < currnode->val && currnode->next->val < currnode->val) // local maxima
        return true;
    if (currnode->prev->val > currnode->val && currnode->next->val > currnode->val)
        return true;

    return false;
}
vector<int> distancebetweenCriticalPoints(node *head, node *tail)
{
    vector<int> ans(2, INT_MAX);
    int firstcp = -1, lastcp = -1;
    node *currnode = tail->prev;
    if (currnode == NULL)
    {
        ans[0] = ans[1] = -1;
        return ans;
    }
    int currpos = 0;
    while (currnode->prev != NULL)
    {
        if (isCriticalpoint(currnode))
        {
            if (firstcp == -1)
            {
                firstcp = lastcp = currpos;
            }
            else
            {
                ans[0] = min(ans[0], currpos - lastcp); // min dist
                ans[1] = currpos - firstcp;             // max dist
                lastcp = currpos;
            }
        }
        currpos++;
        currnode = currnode->prev;
    }
    if (ans[0] == INT_MAX)
    {
        ans[0] = ans[1] = -1;
    }
    return ans;
}

int main()
{

    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(5);//cp
    dll.insertAtEnd(4);
    dll.insertAtEnd(2);//cp
    dll.insertAtEnd(6);//cp
    dll.insertAtEnd(3);
    dll.display();
    vector<int> ans = distancebetweenCriticalPoints(dll.head, dll.tail);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}