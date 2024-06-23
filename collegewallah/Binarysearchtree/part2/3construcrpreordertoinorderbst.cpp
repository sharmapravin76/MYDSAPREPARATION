// class Solution {
// public:
// TreeNode* bstFromPreorderHelper (vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,unordered_map<int,int>inmap)
// {
//     if(prestart>preend||instart>inend)
//     {
//         return NULL;
//     }
//    TreeNode*root=new TreeNode(preorder[prestart]);
//    int inroot_index=inmap[preorder[prestart]];
//    int leftsubtree_elements=inroot_index-instart;
//    root->left=bstFromPreorderHelper(preorder,prestart+1,prestart+leftsubtree_elements,inorder,instart,inroot_index-1,inmap);
//    root->right=bstFromPreorderHelper(preorder,prestart+leftsubtree_elements+1,preend,inorder,inroot_index+1,inend,inmap);
//    return root;
// }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         vector<int>inorder=preorder;
//         sort(inorder.begin(),inorder.end());
//         unordered_map<int,int>inmap;
//         for(int i=0;i<inorder.size();i++)
//         {
//             inmap[inorder[i]]=i;//storing value-index pairs
//         }
//         return bstFromPreorderHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inmap);

//     }
// };



// APPROACH 2
// class Solution {
// public:
// TreeNode* bstFromPreorderHelper (vector<int>&preorder,int &index,int upperbound)
// {
//     if(index>=preorder.size())
//     {
//         return NULL;
//     }
//     if(preorder[index]>=upperbound)
//     {
//         return NULL;
//     }
//    TreeNode*root=new TreeNode(preorder[index]);
//    index++;
//    root->left=bstFromPreorderHelper(preorder,index,root->val);
//    root->right=bstFromPreorderHelper(preorder,index,upperbound);
//    return root;
// }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//        int index=0;
//         return bstFromPreorderHelper(preorder,index,INT_MAX);
//     }
// };