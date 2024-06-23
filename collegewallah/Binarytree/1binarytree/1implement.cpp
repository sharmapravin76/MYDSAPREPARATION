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

int main()
{
    node *root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    cout << "root node:" << root->value << endl;
    cout << "left child:" << root->left->value << endl;
    cout << "right child:" << root->right->value << endl;

    return 0;
}