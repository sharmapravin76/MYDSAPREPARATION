// class Solution {
// public:
//     TreeNode* buildTreehelper(vector<int>& postorder, int poststart, int postend, vector<int>& inorder, int instart, int inend, unordered_map<int, int>& inmap) {
//         if (poststart > postend || instart > inend) {
//             return NULL;
//         }
        
//         TreeNode* rootNode = new TreeNode(postorder[postend]);
//         int rootInorderIndex = inmap[rootNode->val];
//         int leftsubtreesize = rootInorderIndex - instart;
        
//         rootNode->left = buildTreehelper(postorder, poststart, poststart + leftsubtreesize - 1, inorder, instart, rootInorderIndex - 1, inmap);
//         rootNode->right = buildTreehelper(postorder, poststart + leftsubtreesize, postend - 1, inorder, rootInorderIndex + 1, inend, inmap);
        
//         return rootNode;
//     }

//     TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
//         unordered_map<int, int> inmap;
//         for (int i = 0; i < inorder.size(); i++) {
//             inmap[inorder[i]] = i;
//         }
//         return buildTreehelper(postorder, 0, postorder.size() - 1, inorder, 0, inorder.size() - 1, inmap);
//     }
// };
