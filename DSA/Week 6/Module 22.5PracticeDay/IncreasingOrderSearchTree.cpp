// Problem Link: https://leetcode.com/problems/increasing-order-search-tree/
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
//     vector<int> v;
//     void storeOneVector(TreeNode* root){
//         if(root == NULL) return;

//         v.push_back(root->val);
//         storeOneVector(root->left);
//         storeOneVector(root->right);
//     }
//     TreeNode* MakingTree(vector<int> v){
//         int val = v.back();
//         v.pop_back();
//         TreeNode* root = new TreeNode(val);
//         int size = v.size();
//         while(size--){
//         val = v.back();
//         v.pop_back();
//         TreeNode* cur = root;
//         TreeNode* par = NULL;
//         while(cur != NULL){
//                 par = cur;
//                 cur = cur->right;
//         }
//         if(par) par->right = new TreeNode(val);
//         }
//         return root;
//     }
//     TreeNode* increasingBST(TreeNode* root) {
//         v.clear();
//         storeOneVector(root);
//         sort(v.begin(), v.end(), greater<int>());
//         for(auto && i : v){
//             cout << i << " ";
//         }
        
//         TreeNode* makeTheTree = MakingTree(v);
//         return makeTheTree;
//     }
// };