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

void inorderPreSuccBST(Node *root, Node *&pre, Node *&succ, int key)
{
    if (root == NULL)
    {
        return;
    }
    if (root->value == key)
    {
        // pre->rightmost node in left subtree
        if (root->left != NULL)
        {
            Node *temp = root->left;
            while (temp->right != NULL)
            {
                temp = temp->right;
            }
            pre = temp;
        }
        // succ->leftmost node in right subtree
        if (root->right != NULL)
        {
            Node *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            succ = temp;
        }
        return;
    }
    if (root->value > key)
    {
        succ = root;
        inorderPreSuccBST(root->left, pre, succ, key);
    }
    else if (root->value < key)
    {
        pre = root;
        inorderPreSuccBST(root->right, pre, succ, key);
    }
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
    Node *pre = NULL;
    Node *succ = NULL;
    inorderPreSuccBST(bst1.root, pre, succ, 4);
    if (pre != NULL)
    {
        cout << "pre- " << pre ->value<< endl;
    }
    else
    {
        cout << "pre-null" << endl;
    }
    if (succ != NULL)
    {
        cout << "succ- " << succ->value << endl;
    }
    else
    {
        cout << "succ-null" << endl;
    }
    return 0;
}
//    3
//  1   4
//    2   6