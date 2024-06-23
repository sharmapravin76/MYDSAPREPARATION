// class Solution {
// public:
// int maxsumpathhelper(TreeNode* root,int& maxsum)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int leftmaxsum=max(0,maxsumpathhelper(root->left,maxsum));
//     int rightmaxsum=max(0,maxsumpathhelper(root->right,maxsum));
//     maxsum=max(maxsum,root->val+leftmaxsum+rightmaxsum);
//     return root->val+max(leftmaxsum,rightmaxsum);

// }
//     int maxPathSum(TreeNode* root) {
//         int maxsum=INT_MIN;
//     maxsumpathhelper(root,maxsum);
//         return maxsum;
//     }
// };