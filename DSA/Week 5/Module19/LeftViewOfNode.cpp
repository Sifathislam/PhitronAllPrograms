// // Coding Ninja Problem
// LINK:https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519
// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/



// vector<int> getLeftView(TreeNode<int> *root)
// {
//     // Create an frequncy 
//     bool freq[3005] = {false};
//     // create the queue of pair that track the level
//     queue <pair<TreeNode<int>*, int> > q;
//     if(root)q.push({root, 1});
//      // create the vector 
//     vector<int> v;
//     while(!q.empty()){
//     // 1. store and remove         
//        pair<TreeNode<int>*, int> perant = q.front();
//         q.pop();
//         TreeNode<int>* node = perant.first;
//         int level = perant.second;
//     // 2. Do the work 
//         // if(perant->left != NULL) v.push_back(perant->data);
//        if(freq[level] == false){
//            v.push_back(node->data);
//            freq[level] = true;
//        }

//     // 3. Push the children 
//         if(node->left) q.push({node->left, level +1});
//         if(node->right) q.push({node->right, level + 1});

//     }

//     return v;


// }