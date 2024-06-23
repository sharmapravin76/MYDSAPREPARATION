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

Node *lowestcommonancestor(Node *root, Node *node1, Node *node2)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->value > node1->value && root->value > node2->value)
    // lca will lie in left subtree
    {
        return lowestcommonancestor(root->left, node1, node2);
    }
    if (root->value < node1->value && root->value < node2->value)
    {
        return lowestcommonancestor(root->right, node1, node2);
    }
    // if root value lies between node 1 and node 2 value
    // or if root value is equal to any of node values
    return root;
}

int main()
{

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    Node *node1 = new Node(2);
    Node *node2 = new Node(4);
    Node *temp = lowestcommonancestor(bst1.root, node1, node2);
    cout << temp->value << endl;

    return 0;
}
//    3
//  1   4
//    2   6