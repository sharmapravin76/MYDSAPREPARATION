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
void preorderTraversal(node* rootnode)
{
    //basecase
    if(rootnode==NULL)
    {
        return;
    }
    cout<<rootnode->value<<" ";
    //recursive call
    preorderTraversal(rootnode->left);
    preorderTraversal(rootnode->right);

}
int main()
{
    node* rootnode=new node(2);
    rootnode->left=new node(4);
    rootnode->right=new node(10);
    rootnode->left->left=new node(6);
    rootnode->left->right=new node(5);
    rootnode->right->right=new node(11);
    preorderTraversal(rootnode);
    return 0;
}
//    2  
//  4   10
// 6 5    11
//
//
