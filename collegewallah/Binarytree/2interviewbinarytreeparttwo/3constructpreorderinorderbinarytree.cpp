// class Solution {
// public:                                                                                                                                                  
// TreeNode*buildTreehelper(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,unordered_map<int,int>&inmap) 
// {
//     if(prestart>preend||instart>inend)
//     {
//         return NULL;
//     }
//     TreeNode* rootNode=new TreeNode(preorder[prestart]);
//     int rootInorderIndex=inmap[rootNode->val];
//     int leftsubtreesize=rootInorderIndex-instart;
//     rootNode->left=buildTreehelper(preorder,prestart+1, prestart+leftsubtreesize,inorder,instart,rootInorderIndex-1,inmap);
//     rootNode->right=buildTreehelper(preorder,prestart+leftsubtreesize+1,preend,inorder,rootInorderIndex+1,inend,inmap);
//     return rootNode;
// }                               
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//      unordered_map<int,int>inmap;
//      for(int i=0;i<inorder.size();i++)
//      {
//         inmap[inorder[i]]=i;
//      } 
//      return buildTreehelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inmap);
//     }
// };