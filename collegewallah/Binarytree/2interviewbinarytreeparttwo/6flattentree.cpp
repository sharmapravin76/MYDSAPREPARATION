// class Solution {
// public:
// TreeNode*lastNode=NULL;
//     void flatten(TreeNode* root) {
//         if(root==NULL)
//         {
//             return;
//         }
//         flatten(root->right);
//         flatten(root->left);
//         root->right=lastNode;
//         root->left=NULL;
//         lastNode=root;
//         return;
//             }
// };