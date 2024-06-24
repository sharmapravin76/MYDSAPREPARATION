#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>

using namespace std;
class Node
{
public:
  int data;
    vector<Node *> children;
    Node(char data)
    {
        this->data = data;
    }
};
void levelorderTraversal(Node *root)
{
  if(root==NULL)
  {
    return;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty())
  {
    int currentelevelnodes=q.size();
    while(currentelevelnodes--)
    {
        //dequeue
        Node*curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        //enqueue all child nodes
        for(Node*child:curr->children)
        {
            q.push(child);
        }
    }
    cout<<endl;
  }
}
void mirrorTree(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->children.size()<2)
    {
        return;
    }
    reverse(root->children.begin(),root->children.end());
    for(Node* child:root->children)
    {
        mirrorTree(child);
    }
}
int main()
{
    Node *root = new Node(10);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(34));
    root->children.push_back(new Node(56));
    root->children.push_back(new Node(100));
    root->children[1]->children.push_back(new Node(1));
    root->children[3]->children.push_back(new Node(7));
    root->children[3]->children.push_back(new Node(8));
     root->children[3]->children.push_back(new Node(9));
     levelorderTraversal(root);
     mirrorTree(root);
     levelorderTraversal(root);

    return 0;
}
