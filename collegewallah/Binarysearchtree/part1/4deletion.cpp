#include <iostream>
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
bool searchBST(Node *root, int key)
{
    // base case
    if (root == NULL)
    {
        return false;
    }
    if (root->value == key)
    {
        return true;
    }
    // recursive case
    if (root->value < key)
    {
        return searchBST(root->right, key);
    }
    if (root->value > key)
    {
        return searchBST(root->left, key);
    }
}
Node *largestNodeBST(Node *root)
{
    Node *curr = root;
    while (curr && curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr;
}
Node *deleteBST(Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->value < key)
    {
        root->right = deleteBST(root->right, key);
    }
    else if (root->value > key)
    {
        root->left = deleteBST(root->left, key);
    }
    else
    {
        // root is the node to be deleted
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;

        } // node has 1 child node
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        // Node has 2 child nodes
        else
        {
            Node *justSmallerNode = largestNodeBST(root->left);
            root->value = justSmallerNode->value;
            root->left = deleteBST(root->left,justSmallerNode->value);
        }
    }
    return root;
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}
int main()
{
    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    inorderTraversal(bst1.root);
    cout << endl;
    // cout << searchBST(bst1.root, 6) << endl;
    bst1.root=deleteBST(bst1.root,4);
    inorderTraversal(bst1.root);
    cout<<endl;
    return 0;
}