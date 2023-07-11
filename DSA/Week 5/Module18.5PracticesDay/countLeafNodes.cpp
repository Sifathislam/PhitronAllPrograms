// // // Coding Ninja problem 
// // // LINK:https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055
// /**********************************************************

//     Following is the Binary Tree Node class structure:

//     template <typename T>
//     class BinaryTreeNode {
//       public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//                 this -> data = data;
//                 left = NULL;
//                 right = NULL;
//         }
//     };
    
// ***********************************************************/
// int countLeafNode(BinaryTreeNode<int>* root){
//     // Base Case 
//     if(root == NULL) return 0;
//     else if(root->left == NULL && root->right == NULL) return 1;
//     else{
//         int leftC = countLeafNode(root->left);
//         int rightC = countLeafNode(root->right);
//         return leftC + rightC; 
//     }

// }
// int noOfLeafNodes(BinaryTreeNode<int> *root){
    
//     int countLeafs = countLeafNode(root);
//     return countLeafs;
// }