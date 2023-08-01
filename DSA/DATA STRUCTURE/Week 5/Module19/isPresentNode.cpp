// coding Ninja problem
// LINK: https://www.codingninjas.com/studio/problems/code-find-a-node_5682


/************************************************************

//     Following is the Binary Tree node structure

//     template <typename T>
//     class BinaryTreeNode
//     {
//         public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data)
//         {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// bool isNodePresent(BinaryTreeNode<int> *root, int x) {
//     // First create a queue 
//     queue<BinaryTreeNode<int>* > q;

//     if(root) q.push(root);
    
//     while(!q.empty()){
//         // 1.remove and store 
//         BinaryTreeNode<int>* parent = q.front();
//         q.pop();

//         // 2. Do the work
//         if(parent->data == x){
//             return true;
//         }

//         // 3. work give the child 
//         if(parent->left) q.push(parent->left);
//         if(parent->right) q.push(parent->right);

//     }
//     return false;
// }