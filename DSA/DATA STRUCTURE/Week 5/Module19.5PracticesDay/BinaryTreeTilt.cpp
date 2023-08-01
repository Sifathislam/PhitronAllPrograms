// problem of Leet code 
// LINK: https://leetcode.com/problems/binary-tree-tilt/
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
//     int sumOfTilt = 0;
//     int findSumTilt(TreeNode* root){
//         if(root == NULL) return 0;
//         int leftval = findSumTilt(root->left);
//         int rightval = findSumTilt(root->right);
//         sumOfTilt = sumOfTilt + abs(leftval - rightval);

//         return leftval + rightval+ root->val;
//     }
//     int findTilt(TreeNode* root) {
//      sumOfTilt = 0;
//      int value = findSumTilt(root);

//         return sumOfTilt;
//     }
// };