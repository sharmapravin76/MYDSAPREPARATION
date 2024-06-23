#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

vector<int> bottomviewbinarytree(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));
    map<int, int> m;
    while (!q.empty())
    {
        int nodesatcurrentlevel = q.size();
        while (nodesatcurrentlevel--)
        {
            pair<node *, int> p = q.front();
            node *currnode = p.first;
            int currcolumn = p.second;
            q.pop();
            // Overwrite the map entry for the current column with the current node's value
            m[currcolumn] = currnode->value;

            if (currnode->left)
            {
                q.push(make_pair(currnode->left, currcolumn - 1));
            }
            if (currnode->right)
            {
                q.push(make_pair(currnode->right, currcolumn + 1));
            }
        }
    }
    for (auto it : m)
    {
        ans.push_back(it.second);
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

    vector<int> ans = bottomviewbinarytree(rootnode);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
