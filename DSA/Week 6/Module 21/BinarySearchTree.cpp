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
bool BinarySearchTree(Node* root, int x){
    // Base case 
    if(root == NULL) return false;

    if(root->val == x) return true;

    if (root->val > x)
    {
        return BinarySearchTree(root->left, x);
    }
    else{
        return BinarySearchTree(root->right, x);
    }
    
}
int main(){
    // create binary treee input ;
    Node* root = LevelOrderInput();

    // Find the BinarySearchTree
    int x; cin >> x;    
    bool BST = BinarySearchTree(root, x);
    
    if(BST) cout << "YES Find The Value On The Tree" << endl;
    else cout << "Didn't Find The Value On The Tree" << endl;

     

    return 0;
}