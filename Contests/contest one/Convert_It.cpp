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

// Take the treee in priority_queue for the oparations 
priority_queue<int> pq;
void TreeInToPriorityQueue(Node* root){
    if(root == NULL) return;
    pq.push(root->val);
  TreeInToPriorityQueue(root->left);
  TreeInToPriorityQueue(root->right);
}

int main(){
    // take input of tree 
  Node* root = input_Tree();
// covert into priority_queue
  TreeInToPriorityQueue(root);
// Do the oparations 
  int q; cin >> q;
  while (q--)
  {
    int n; cin >> n;
    if(n == 1)
    {
        int x; cin >> x;
        pq.push(x);
    }
    else{
        if(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
        }
    }
}
  
    


    return 0;
}