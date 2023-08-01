// // // Coding Ninja problem 
// // // LINK:https://www.codingninjas.com/studio/problems/level-order-traversal_796002
// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the BinaryTreeNode class structure

//     template <typename T>
//     class BinaryTreeNode {
//        public:
//         T val;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/
// vector<int> getLevelOrder(BinaryTreeNode<int> *root)
// {
//     // create vector 
//     vector <int> v;
    
//     // create queue
//     queue <BinaryTreeNode<int>*> q;

//     if(root)q.push(root);
//     while(!q.empty()){

//         // 1st work
//         BinaryTreeNode<int> *parent = q.front();
//         q.pop();
         
//         // 2nd work
//         v.push_back(parent->val);

//         // 3rd work 
//         if(parent->left) q.push(parent->left);
//         if(parent->right) q.push(parent->right);

        
//     }
//     return v;
// }