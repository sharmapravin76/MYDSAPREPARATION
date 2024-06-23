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

// // void inorderTraversal(Node *root)
// {
//     if (root == NULL)
//         return;
//     inorderTraversal(root->left);
//     cout << root->value << " ";
//     inorderTraversal(root->right);
// }
Node *sortedArrayToBST(vector<int> v, int start, int end)
{
    // base case
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);
    // recursive case
    root->left = sortedArrayToBST(v, start, mid - 1); // recursively creating left subtree from lefthalf of array
    root->right = sortedArrayToBST(v, mid + 1, end);  // recursively creating right subtree from righthalf of array
    return root;
}
void preordeTraversal(Node *root)
{
    if (root == NULL)
        return;
    cout << root->value << " ";
    preordeTraversal(root->left);
    preordeTraversal(root->right);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    BST bst;
    bst.root = sortedArrayToBST(v, 0, n - 1);
    preordeTraversal(bst.root);


    return 0;
}

//          4
//      2        6
//    1    3   5   7