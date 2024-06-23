#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
};
Node *insertBST(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        Node *newNode = new Node(val);
        return newNode;
    }
    // recursive case
    if (root->value > val)
    {
        root->left = insertBST(root->left, val);
    }
    else if (root->value < val)
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node *removeleafnode(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return NULL; // when root is a leaf node
    }
    // recursive case
    root->left = removeleafnode(root->left);
    root->right = removeleafnode(root->right);
    return root;
}
void preordertraversal(Node *root)
{
    if (root == NULL)
        return;
    cout << root->value << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
int main()
{

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    preordertraversal(bst1.root);
    cout << endl;
    bst1.root = removeleafnode(bst1.root);
    preordertraversal(bst1.root);
    cout << endl;
    return 0;
}
//    3
//  1   4
//    2   6