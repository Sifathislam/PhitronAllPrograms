// problem of Leet code 
// LINK: https://leetcode.com/problems/leaf-similar-trees/

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
//     vector <int> v1;
//     vector <int> v2;
//     void GettheleafRoot1(TreeNode* root1){
//         if(root1 == NULL) return;
//         if(root1->left == NULL && root1->right == NULL){
//             v1.push_back(root1->val);
//         }
//         GettheleafRoot1(root1->left);
//         GettheleafRoot1(root1->right);

//     }
//        void GettheleafRoot2(TreeNode* root2){
//         if(root2 == NULL) return;
//         if(root2->left == NULL && root2->right == NULL){
//             v2.push_back(root2->val);
//         }
//         GettheleafRoot2(root2->left);
//         GettheleafRoot2(root2->right);

//     }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         v1.clear();
//         v2.clear();
//         GettheleafRoot1(root1);
//         GettheleafRoot2(root2);
//        if(v1.size() != v2.size()) return false;
       
//         return v1 == v2; 
//     }
// };