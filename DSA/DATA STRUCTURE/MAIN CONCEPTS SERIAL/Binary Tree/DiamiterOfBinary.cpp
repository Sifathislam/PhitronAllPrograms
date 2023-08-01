// // Coding NinJa Problem 
// // LINK: https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552?leftPanelTab=0
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
// int mx = 0 ;
// int FindTheDiaMeter(TreeNode<int>* root){
//     // Basecase 
//     if(root == NULL) return 0;
    
//     int leftc = FindTheDiaMeter(root->left);
//     int rightc = FindTheDiaMeter(root->right);
//     mx = max(mx, leftc + rightc);

//     return max(leftc,rightc) + 1; 
// }

// int diameterOfBinaryTree(TreeNode<int> *root)
// {
//     mx = 0;
//     FindTheDiaMeter(root);
//     return mx;

// }
