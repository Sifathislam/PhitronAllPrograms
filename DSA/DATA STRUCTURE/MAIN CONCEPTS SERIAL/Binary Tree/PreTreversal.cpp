// // Coding Ninja problem
// // LINK:https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948
// /**********************************************************
// 	Following is the Binary Tree Node class structure

// 	template <typename T>
// 	class BinaryTreeNode {
//     	public : 
//     	T data;
//     	BinaryTreeNode<T> *left;
//     	BinaryTreeNode<T> *right;

//     	BinaryTreeNode(T data) {
//         	this -> data = data;
//         	left = NULL;
//         	right = NULL;
//     	}
// 	};

// ***********************************************************/
// void PrintThePreOrder(BinaryTreeNode<int> *root){
// 	// Base Case 
// 	if(root == NULL) return;

// 	cout << root->data <<" ";
// 	PrintThePreOrder(root->left);
// 	PrintThePreOrder(root->right); 
 
// }

// void preOrder(BinaryTreeNode<int> *root) {
	
// 	PrintThePreOrder(root);
// }