// class Solution {
// public:
// int pathsumhelper(TreeNode* root,int targetSum,long int currsum,unordered_map<long int,int>pathcount)
// {
// if(root==NULL)
// {
//     return 0;
// }
// currsum+=root->val;
// int anscount=pathcount[currsum-targetSum];
// pathcount[currsum]++;
// anscount+=pathsumhelper(root->left,targetSum,currsum,pathcount)+pathsumhelper(root->right,targetSum,currsum,pathcount);
// pathcount[currsum]--; //when we are backtracking
// return anscount;
// }
//     int pathSum(TreeNode* root, int targetSum) {
//         unordered_map<long int,int>pathcount;
//         pathcount[0]=1;
//         return pathsumhelper(root,targetSum,0,pathcount);
        
//     }
// };
#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int pathsumhelper(TreeNode* root, int targetSum, long int currsum, unordered_map<long int, int>& pathcount) {
        if (root == NULL) {
            return 0;
        }
        currsum += root->val;
        int anscount = pathcount[currsum - targetSum];
        pathcount[currsum]++;
        anscount += pathsumhelper(root->left, targetSum, currsum, pathcount) + pathsumhelper(root->right, targetSum, currsum, pathcount);
        pathcount[currsum]--; // when we are backtracking
        return anscount;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long int, int> pathcount;
        pathcount[0] = 1; //inserting the 
        return pathsumhelper(root, targetSum, 0, pathcount);
    }
};

int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(-3);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(11);
    root->left->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(-2);
    root->left->right->right = new TreeNode(1);

    Solution solution;
    int targetSum = 8;
    int result = solution.pathSum(root, targetSum);
    cout << "Number of paths that sum to " << targetSum << ": " << result << endl;

    return 0;
}
