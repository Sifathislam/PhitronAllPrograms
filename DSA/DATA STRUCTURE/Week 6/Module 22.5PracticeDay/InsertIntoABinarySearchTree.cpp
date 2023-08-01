// Problem LInk: https://www.codingninjas.com/studio/problems/insert-into-a-binary-search-tree_1279913
// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T val;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/
// TreeNode<int>* InsertBST(TreeNode<int>* &root,int val){
//     TreeNode<int>* newNode = new TreeNode<int> (val);
//     if(root == NULL) {
//         root = newNode;
//         return root;
//     }
//     TreeNode<int>* cur = NULL;
//     TreeNode<int>* par = NULL;
//     cur = root;
    
//     while(cur != NULL){
//         if(cur->val > val){
//             par = cur;
//             cur = cur->left;
//         }
//         else if(cur->val < val){
//             par = cur;
//             cur = cur->right;
//         }
//     }
//     if(par->val > val){
//         par->left = newNode;
//     }
//     else{
//         par->right = newNode;
//     }
//     return root;
// }

// TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
// {
//     TreeNode<int>* inserted = InsertBST(root, val);

//     return inserted;
// }