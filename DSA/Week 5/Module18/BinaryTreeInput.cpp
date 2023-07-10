#include<bits/stdc++.h>
using namespace std;
// Create Binary Tree class 
class Node{
    public:
    int val;
    Node *left;
    Node *right;

    // consturctor 
    Node (int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* input_Tree(){
    // Take first input 
    int val; cin >> val;

    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue <Node*> q;
    if (root) q.push(root);

    while (!q.empty())
    {
        // 1.Store and Remove from line 
        Node* perant = q.front();
        q.pop();

        // 2.Do The work 
        int left, right; cin >> left >> right;

        // create two node for the left right
        Node* left_Node;
        Node* right_Node;

        if (left == -1) left_Node = NULL;
        else left_Node = new Node(left);

        if (right == -1) right_Node = NULL;
        else right_Node = new Node(right);

        perant->left = left_Node; 
        perant->right = right_Node; 
        
        // 3. Push the childrens 
        if(perant->left) q.push(perant->left);
        if(perant->right) q.push(perant->right);


    }
    return root;
} 

// Print with level order 
void output_tree_level(Node* root){
    // check coner case 
    if(root == NULL){
        cout << "Empty root"<< endl;
        return;
    }
    // Create a queue for matain the line 
    // queue will be in Node because of it store the node for get the children
    queue <Node*> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. Store the first Node and Remove the from queue  
        Node* Store = q.front();
        q.pop();

        // 2. Do all the work you want to do 
        cout << Store->val << " ";

        // 3. Give your childrens to me for next work 
        // if(Store->right) q.push(Store->right);       // right first
        // if (Store->left) q.push(Store->left);
        
        if (Store->left) q.push(Store->left); // left first 
        if(Store->right) q.push(Store->right);
        
    }
}
int main(){

    //  Create a function for the input of the binary 
    Node* root = input_Tree();
    output_tree_level(root);

    return 0;
}