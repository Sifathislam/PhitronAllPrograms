// Coding Ninja Problem 
// LINK:https://www.codingninjas.com/studio/problems/node-level_920383


// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T val;
//         bool isOriginal;
//         TreeNode<T> *left;
//         TreeNode<T> *right;
        
//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// int nodeLevel(TreeNode<int>* root, int searchedValue)
// {
//     // Create queue with the pair for find the for treverse
//     queue <pair<TreeNode<int>*,int>> q;

//     if(root) q.push({root, 1});
//     while(!q.empty()){
//         // 1. Store and remove
//         pair<TreeNode<int>*,int> pr = q.front();
//         q.pop();
//         TreeNode<int>* node = pr.first;
//         int level = pr.second;

//         // 2. Do the work
//         if(node->val == searchedValue) return level;

//         // 3. Give child 

//         if(node->left) q.push({node->left, level + 1});
//         if(node->right) q.push({node->right, level + 1});
//     }
// }
