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

    // Print the binary with InOrder 
void InOrder(Node* root){
    // Base case 
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
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

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    // Print the binary with InOrder 

    InOrder(root);

     

    return 0;
}