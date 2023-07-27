// Prolem LINk:https://leetcode.com/problems/minimum-absolute-difference-in-bst/
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
//     void GetTheMin(TreeNode* root,vector<int> &v){
//         if(root == NULL) return;
//         if(root) v.push_back(root->val);
//         GetTheMin(root->left,v);
//         GetTheMin(root->right,v);
//         return;
//     }
//     int getMinimumDifference(TreeNode* root) {
//         // Create the vector and the insert tree in root 
//         vector<int> v;
//         GetTheMin(root,v);

//         int minDe = INT_MAX;
//         sort(v.begin(), v.end());
//         for(int i = 0;i < v.size()-1; i++){
//             int j = i + 1; 
//             minDe = min( minDe ,abs(v[i] - v[j]) );
//             cout << v[i] << " - " << v[j] << " = " << abs(v[i] - v[j]) << endl;
//         }
        
//         return minDe;
//     }
// };