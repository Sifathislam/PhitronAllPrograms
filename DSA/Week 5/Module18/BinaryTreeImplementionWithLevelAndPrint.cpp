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


// Print with level order 
void level_Order(Node* root){
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


    // Print with the level order 
    level_Order(root);
    return 0;
}