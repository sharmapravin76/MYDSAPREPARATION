// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// TreeNode* constructfrompreposthelper(vector<int>&preorder,int prestart,int preend,vector<int>&postorder,int poststart,int postend,unordered_map<int,int>&postmap)
// {
//     if(prestart>preend||poststart>postend)
//     {
//         return NULL;
//     }
//     TreeNode* rootNode=new TreeNode(preorder[prestart]);
//     if(prestart==preend)
//     {
//         return rootNode;
//     }
//     int leftchildvalue=preorder[prestart+1];
//     int leftchildindex=postmap[leftchildvalue];
//     int leftsubtreesize=leftchildindex-poststart+1;

// rootNode->left=constructfrompreposthelper(preorder,prestart+1,prestart+leftsubtreesize,postorder,poststart,leftchildindex,postmap);
// rootNode->right=constructfrompreposthelper(preorder,prestart+leftsubtreesize+1,preend,postorder,leftchildindex+1,postend-1,postmap);
// return rootNode;
// }
//     TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {

//         unordered_map<int,int>postmap;
//         for(int i=0;i<postorder.size();i++)
//         {
//             postmap[postorder[i]]=i;

//         }
//         return constructfrompreposthelper(preorder,0,preorder.size()-1,postorder,0,postorder.size()-1,postmap);
//     }
// };