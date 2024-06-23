#include <iostream>
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
int maxdepth(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    // recursive case
    int leftdepth = maxdepth(root->left);
    int rightdepth = maxdepth(root->right);
    return (max(leftdepth, rightdepth) + 1);
}

int main()
{
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    rootnode->right->right->right = new node(12);
    cout << maxdepth(rootnode) << endl;
    return 0;
}