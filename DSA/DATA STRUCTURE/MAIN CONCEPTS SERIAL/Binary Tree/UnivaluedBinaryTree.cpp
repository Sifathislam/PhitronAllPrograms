// problem of Leet code 
// LINK: https://leetcode.com/problems/univalued-binary-tree/
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
//     // bool checkUni(TreeNode* root, int val){
//     //     // Base Case 
//     //     if(root == NULL) return true;
        
//     //     if(root->val != val) return false;
//     //     else return true;

//     //     bool leftB = checkUni(root->left,val);
//     //     bool rightB = checkUni(root->right, val);
//     //     if(leftB == false || rightB == false) return false;
//     //     else return true;
//     // }
//     bool isUnivalTree(TreeNode* root) {
//     //  bool check = checkUni(root, root->val);
//     //  return check;

//         //  let's solve in level order  

//         // create the queue
//         queue<TreeNode*>q;
//         if(root) q.push(root);
//         int val = root->val;
//         while(!q.empty()){
//             // 1. remove and store
//             TreeNode* pr = q.front();
//             q.pop();

//             // 2. work need to do 
//             if(pr->val != val) return false;

//             // 3. give child 
//             if(pr->left) q.push(pr->left);
//             if(pr->right) q.push(pr->right);
//         }
//         return true;
//     }
// };