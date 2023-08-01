// Problem Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
//     void TakeTheTreeVector(TreeNode* root){
//        queue<TreeNode*> q;
//        if(root) q.push(root);
//        while(!q.empty()){
//         //    1. store and remove
//         TreeNode* pr = q.front();
//         q.pop();

//         // 2.Do the work
//         v.push_back(pr->val);

//         // 3. Give childrens 
//         if(pr->left) q.push(pr->left);
//         if(pr->right) q.push(pr->right);

//        }
//     }
//     bool macthinBYSelection(vector<int> v, int k){
//         for(int i = 0; i < v.size()-1; i++){
//             for(int j = i + 1; j < v.size(); j++){
//                 if((v[i] + v[j]) == k)
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool findTarget(TreeNode* root, int k) {
//         v.clear();
//         TakeTheTreeVector(root);
//         int sizeOfvector = v.size() - 1;
//         for(int i = 0; i < sizeOfvector; i++){
//             int j = i + 1;
//             int sumOfTwo = v[i] + v[j];
//             // cout << i << " " << j << " ";
//             cout << endl << sumOfTwo;
//             if(sumOfTwo == k){
//                 return true;
//             }
//             return macthinBYSelection(v,k);
//         }
//         return false;
//     }
// };