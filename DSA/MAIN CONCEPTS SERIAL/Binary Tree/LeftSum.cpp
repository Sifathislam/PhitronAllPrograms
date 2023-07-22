// // // Coding Ninja problem 
// // // LINK:https://www.codingninjas.com/studio/problems/left-sum_920380
// #include <bits/stdc++.h> 
// /*
// 	Tree Node class.

// 	class BinaryTreeNode 
// 	{
// 		T data;
// 		BinaryTreeNode<T> *left;
// 		BinaryTreeNode<T> *right;

// 		BinaryTreeNode(T data) {
// 			this->data = data;
// 			left = NULL;
// 			right = NULL;
// 		}
// 	}
// */
// long long leftSum(BinaryTreeNode<int> *root)
// {
// 	long long int Sum = 0;
	
// 	// create a queue for the traverse in level 
// 	queue<BinaryTreeNode<int>*> q;

// 	if(root) q.push(root);

// 	while(!q.empty()){
// 		// 1. work remove and store 
// 		BinaryTreeNode<int>* parent = q.front();
// 		q.pop();

// 		// 2. all the work
// 		if(parent->left != NULL) Sum+= parent->left->data;
		
// 		// 3.Give the childs 
// 		if(parent->left) q.push(parent->left);
// 		if(parent->right) q.push(parent->right);

		
// 	}
	
// 	return Sum;
// }