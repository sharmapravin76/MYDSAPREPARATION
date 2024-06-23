#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <stack>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;
    node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

vector<int> reverselevelorder(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    while (!q.empty())
    {

        int nodesatcurrentlevel = q.size();
        while (nodesatcurrentlevel--)
        {

            node *currnode = q.front();
            q.pop();
            s.push(currnode);
            if (currnode->right)
            {
                q.push(currnode->right);
            }
            if (currnode->left)
            {
                q.push(currnode->left);
            }
        }
    }
    while (!s.empty())
    {
        ans.push_back(s.top()->value);
        s.pop();
    }
    return ans;
}

int main()
{
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->left->right = new node(12);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);

    vector<int> ans = reverselevelorder(rootnode);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
