#include<bits/stdc++.h>
using namespace std;
// Create an binary treee 
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

Node* LevelOrderInput(){
    // Take input 
    int val; cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    // Create the queue for input 
    queue<Node*> q;
    if(root)q.push(root);

    while (!q.empty())
    {
        // 1. Store and remove 
        Node* parent = q.front();
        q.pop();

        // 2. Do the work
        int leftV, rightV; cin >> leftV >> rightV;

        Node* left_Node;
        Node* right_Node;

        if (leftV == -1) left_Node = NULL;
        else left_Node = new Node(leftV);

        if (rightV == -1) right_Node = NULL;
        else right_Node = new Node(rightV);

        parent->left = left_Node;
        parent->right = right_Node;

        // 3. Give the Childrens 
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);     
    }
    
    return root;
    
}

    // Print the Binary in level
void LevelOrder(Node* root)
{
    // create the queue 
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // 1. Store and remove 
        Node* pr = q.front();
        q.pop();

        //2. Do the work 
        cout << pr->val << " ";
        // 3. Give Child 
        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);

    }
    
}
void insertBSTOrder(Node* &root,int x){
    // Corner CAse 
    if(root == NULL) {
        root = new Node(x);
    }

    if(root->val > x){
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else{
            insertBSTOrder(root->left,x);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else{
            insertBSTOrder(root->right,x);
        }
    }
}

int main(){
    // create binary treee input ;
    Node* root = LevelOrderInput();
    

    // Insert in BST Order
    int n; cin >> n;
    while (n--)
    {
        int x; cin >> x; 
        insertBSTOrder(root, x);
    }
    

    // Print the Binary in Leverorder  
    LevelOrder(root);
    


     

    return 0;
}