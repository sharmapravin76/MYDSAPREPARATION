// class Solution {
// public:
// vector<TreeNode*>generateTreesHelper(int start,int end)
// {
//     vector<TreeNode*>treelist;
//     //base case
//     if(start>end)
//     {
//         treelist.push_back(NULL);
//         return treelist;
//     }
// for(int i=start;i<=end;i++)
// {
//     //recursive case
//     vector<TreeNode*>leftsubtrees=generateTreesHelper(start,i-1);
//     vector<TreeNode*>rightsubtrees=generateTreesHelper(i+1,end);
//     for(TreeNode* leftsubtree:leftsubtrees)
//     {
//         for(TreeNode*rightsubtree:rightsubtrees)
//         {
//             TreeNode*rootNode=new TreeNode(i);
//             rootNode->left=leftsubtree;
//             rootNode->right=rightsubtree;
//             treelist.push_back(rootNode);
//         }
//     }
// }
// return treelist;
// }

//     vector<TreeNode*> generateTrees(int n) {
//         return generateTreesHelper(1,n);
        
//     }
// };