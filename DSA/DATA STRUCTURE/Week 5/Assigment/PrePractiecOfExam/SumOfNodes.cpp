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

void PreOrder(Node* root, int* sum){
    // BaseCase
    if(root == NULL) return;

    *sum = *sum + root->val; 

    PreOrder(root->left,sum);
    PreOrder(root->right,sum);
}

void PostOrder(Node* root, int* sum){
    // BaseCase
    if(root == NULL) return;

    *sum = *sum + root->val; 

    PreOrder(root->left,sum);
    PreOrder(root->right,sum);
}

void InOrder(Node* root, int* sum){
    // BaseCase
    if(root == NULL) return;

    *sum = *sum + root->val; 

    PreOrder(root->left,sum);
    PreOrder(root->right,sum);
}
void LevelOrder(Node* root,int *sum_Level)
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
        *sum_Level = *sum_Level + pr->val;
        
        // 3. Give Child 
        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);

    }
    
}
int main(){
    // Take input 
    Node* root = LevelOrderInput();

    // create the sum of the Dfs
    int sum_pre = 0; 
    int sum_post = 0; 
    int sum_in = 0; 
    int sum_Level = 0; 
    PreOrder(root, &sum_pre);
    PostOrder(root, &sum_post);
    InOrder(root, &sum_in);

    // create the Bfs sum 
    LevelOrder(root,&sum_Level);

    cout << sum_pre << endl;
    cout << sum_post << endl;
    cout << sum_in<< endl;
    cout << sum_Level<< endl;
    return 0;
}