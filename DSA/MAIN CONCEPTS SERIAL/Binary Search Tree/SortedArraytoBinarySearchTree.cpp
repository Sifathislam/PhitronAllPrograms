// // Problem form the leet code 
// LINK: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
//     TreeNode* CovertBST(vector<int> &nums , int l, int r){
//         // Base Case 
//         if(l > r) return NULL;
//         int mid = (l + r) / 2;
//         TreeNode* root = new TreeNode(nums[mid]);
//         TreeNode* left_Node = CovertBST(nums, l, mid - 1);
//         TreeNode* right_Node = CovertBST(nums, mid + 1, r);

//         root->left = left_Node;
//         root->right = right_Node;

//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         TreeNode* root = CovertBST(nums, 0, nums.size() - 1);
//         return root;
//     }
// };