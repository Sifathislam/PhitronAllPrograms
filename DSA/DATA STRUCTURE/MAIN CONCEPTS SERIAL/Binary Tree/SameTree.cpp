// problem of Leet code 
// LINK: https://leetcode.com/problems/same-tree/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool PreOrderSame(TreeNode* p, TreeNode* q){
//         if(q == NULL || p == NULL) return true;

//         if(p->val != q->val) return false;

//         bool leftBOOL = PreOrderSame(p->left, q->left);
//         bool rightBOOL = PreOrderSame(p->right, q->right);
        
//         if(leftBOOL == false || rightBOOL == false) return false;
//         else return true;
//     }

//     bool levelOrderSame(TreeNode* p, TreeNode* q){
//         queue<TreeNode*> P;
//         queue<TreeNode*> Q;
//         if(p) P.push(p);
//         if(q) Q.push(q);

//         while(!P.empty() && !Q.empty()){
//             // 1. Store and remove
//             TreeNode* Ppre = P.front();
//             TreeNode* Qpre = Q.front();
//             P.pop();
//             Q.pop();
            
//             // 2. Do the work
//             if(Ppre != NULL && Qpre == NULL || Ppre == NULL && Qpre != NULL){
//                 return false;
//             }
//             if(Ppre->left != NULL && Qpre->left == NULL || Ppre->left == NULL && Qpre->left != NULL){
//                 return false;
//             }
//              if(Ppre->right != NULL && Qpre->right == NULL || Ppre->right == NULL && Qpre->right != NULL){
//                 return false;
//             }
//             if(Ppre->val != Qpre->val){
//                 return false;
//             }
//             else{
//                 cout << "level " << endl;
//             }

//             // 3.Give the child 
//             if(Ppre->left) P.push(Ppre->left);
//             if(Ppre->right) P.push(Ppre->right);
//             if(Qpre->left) Q.push(Qpre->left);
//             if(Qpre->right) Q.push(Qpre->right);
//         }
//         return true;
//     }
//     bool PostOrderSame(TreeNode* p, TreeNode* q){
//         if(p == NULL || q == NULL) return true;

//         bool leftBOOL = PostOrderSame(p->left,q->left);
//         bool rightBOOL = PostOrderSame(p->right, q->right);
//         if(p->val != q->val) return false;
//         if(leftBOOL == false || rightBOOL == false) return false;
//         else return true;

//         }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//     if(p == NULL && q == NULL) return true;
//     if(p != NULL && q == NULL || p == NULL && q != NULL ) return false;

//     //  bool preorder = PreOrderSame(p, q); 
//      bool levelorder = levelOrderSame(p, q);
//     //  bool postorder = PostOrderSame(p , q);

   

//     return levelorder;
//     }
// };