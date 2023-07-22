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

// Print the binary  in preOrder 
void Pre_Order(Node* root){
    // Base case 
    if (root == NULL){
        return;
    }
    cout << root->val << " ";
    Pre_Order(root->left);
    Pre_Order(root->right);
}

int main(){
    // Create Normal insertion
     Node* root = new Node(10);
     Node* a = new Node(20);
     Node* b = new Node(30);
     Node* c = new Node(40);
     Node* d = new Node(50);
     Node* e = new Node(60);
     Node* f = new Node(70);
     Node* g = new Node(80);
     Node* h = new Node(90);
     Node* i = new Node(100);

    //  Make the connection 
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->left = i;

    // Print the binary tree

    Pre_Order(root);
    return 0;
}