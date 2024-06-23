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
void inorderTraversal(node *rootnode)
{
    // base case
    if (rootnode == NULL)
    {
        return;
    }
    // recursive case
    inorderTraversal(rootnode->left);
    cout << rootnode->value << " ";
    inorderTraversal(rootnode->right);
}

int main()
{
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    inorderTraversal(rootnode);
    return 0;
} 