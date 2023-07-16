// // Problem of leet code 
// // https://leetcode.com/problems/range-sum-of-bst/description/
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
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         queue<TreeNode*> q;
//         if(root) q.push(root);
//         int sumbst = 0;
//         while(!q.empty()){
//             // 1. store and remove
//             TreeNode* perant = q.front();
//             q.pop();

//             // 2. work 
//             if(perant->val >= low && perant->val <= high){
//                 sumbst += perant->val;
//             }

//             // 3. give children 
//             if(perant->left) q.push(perant->left);
//             if(perant->right) q.push(perant->right);

//         }
//         return sumbst;
//     }
// }