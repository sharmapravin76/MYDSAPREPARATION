//  question number 1372 in leetcode

//class NodeInfo{
//     public:
//     int minvalue;
//     int maxvalue;
//     int maxcurrentSum;
//     NodeInfo(int min,int max,int sum)
//     {
// minvalue=min;
// maxvalue=max;
// maxcurrentSum=sum;

//     }
//  };
// class Solution {
// public:
// int ans=0;
// NodeInfo maxSumBSTHelper(TreeNode* root) {
// if(!root)
// {
//     return NodeInfo(INT_MAX,INT_MIN,0);
// }
//         NodeInfo leftsubtree=maxSumBSTHelper(root->left);
//         NodeInfo rightsubtree=maxSumBSTHelper(root->right);
//         if(root->val>leftsubtree.maxvalue&&root->val<rightsubtree.minvalue)
//         {
//             //root node forms a BST
//             ans=max(ans,leftsubtree.maxcurrentSum+rightsubtree.maxcurrentSum+root->val);
//             return NodeInfo(min(leftsubtree.minvalue,root->val),max(rightsubtree.maxvalue,root->val),leftsubtree.maxcurrentSum+rightsubtree.maxcurrentSum+root->val);
//         }
//         //root node does not form a BST
//         return NodeInfo(INT_MIN,INT_MAX,max(leftsubtree.maxcurrentSum,rightsubtree.maxcurrentSum));
//     }
//     int maxSumBST(TreeNode*root)
//     {
//         maxSumBSTHelper(root);
//         return ans;
//     }

// };