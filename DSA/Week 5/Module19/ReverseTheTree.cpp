// Coding Ninja Problem 
// LINK:https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339?leftPanelTab=0
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>

vector<int> reverseLevelOrder(TreeNode<int> *root){
//    Create the vector
    vector<int> v;
//    Create the queue for the level order 
   queue<TreeNode<int>*> q;
   if(root) q.push(root);

   while(!q.empty()){
    //1. Store and remove 
    TreeNode<int>* pr = q.front();
    q.pop();

    // 2. Do the work
    v.push_back(pr->val);
    
    // 3. Give The child
    if(pr->left) q.push(pr->left);
    if(pr->right) q.push(pr->right);

  }
  
    reverse(v.begin(), v.end());
    return v;
}