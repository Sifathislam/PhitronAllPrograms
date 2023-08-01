// // // Coding Ninja problem 
// // // LINK:https://www.codingninjas.com/studio/problems/inorder-traversal_3839605
// #include <bits/stdc++.h> 
// /*
//     Following is Binary Tree Node structure:
//     class TreeNode
//     {
//     public:
//         int data;
//         TreeNode *left, *right;
//         TreeNode() : data(0), left(NULL), right(NULL) {}
//         TreeNode(int x) : data(x), left(NULL), right(NULL) {}
//         TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
//     };
// */

// // Declare vector 
// vector <int> v;

// void Inorder(TreeNode* root){
//     // Base case 
//     if(root == NULL) return;

//     Inorder(root->left);
//     v.push_back(root->data);
//     Inorder(root->right);

// }

// vector<int> getInOrderTraversal(TreeNode *root)
// {
//     v.clear();
//     Inorder(root);
//     return v;
// }
