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
int leafnodes(node *root)
{
    // base case
    if (root == NULL)
        
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1; // leaf node
    }
    // recursive case
    int leftsubtreeleafnodes = leafnodes(root->left);
    int rightsubtreeleafnodes = leafnodes(root->right);
    return leftsubtreeleafnodes + rightsubtreeleafnodes;
}
int main()
{
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
        rootnode->right->left = new node(12);
    rootnode->right->right = new node(11);


    cout << leafnodes(rootnode) << endl;
    return 0;
}