// class Solution {
// public:
// bool isValidBSTHelper(TreeNode* root,long minvalue,long maxvalue)
// {
//     if(root==NULL){
//         return true;
//     }
// //1.root node value should lie in it's range
// if(root->val<=minvalue||root->val>=maxvalue)
// {
//     return false;
// }
// //2&3. left and right subtrees should be BST
// return isValidBSTHelper(root->left,minvalue,root->val)//left subtree
// &&isValidBSTHelper(root->right,root->val,maxvalue);//right subtree


// }
//     bool isValidBST(TreeNode* root) {
//         return isValidBSTHelper(root,LONG_MIN,LONG_MAX);
        
//     }
// };

// solving with inorder of binary search tree is sorted
// class Solution {
// public:
// bool isValidBSTHelper(TreeNode* root,TreeNode* &prev)
// {
//     if(root==NULL)
//     {
//         return true;
//     }


//    if(!isValidBSTHelper(root->left,prev))//left subtree
//    {
//     return false;

//    }
//    if(prev!=NULL&&root->val<=prev->val)//root node
//    {
// return false;
//    }
//    prev=root;
//  return isValidBSTHelper(root->right,prev);//right subtree
// }
//     bool isValidBST(TreeNode* root) {
//         TreeNode* prev=NULL;
//         return isValidBSTHelper(root,prev);
        
//     }
// };