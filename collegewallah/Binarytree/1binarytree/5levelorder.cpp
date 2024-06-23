#include <iostream>
#include<queue>
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
void levelorderTraversal(node *rootnode)
{
    if(rootnode==NULL)
    {
        return;
    }

    queue<node*>q;
    q.push(rootnode);
    while(!q.empty())
    {
        int nodeatcurrentlevel=q.size();
        while (nodeatcurrentlevel--)
        {
            /* code */
            node* currnode=q.front();
            q.pop();
            cout<<currnode->value<<" ";
            if(currnode->left)
            {
                q.push(currnode->left);
            }
            if(currnode->right)
            {
                q.push(currnode->right);
            }
            
        }
        
cout<<endl;
    }

   
}

int main()
{
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    levelorderTraversal(rootnode);
    return 0;
} 