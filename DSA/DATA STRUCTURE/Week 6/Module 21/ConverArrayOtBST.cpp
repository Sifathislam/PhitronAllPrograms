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
Node* convertBST(int arr[],int n,int l, int r){
    // Base case 
    if(l > r) return NULL;
    
    int mid = (l + r) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = convertBST(arr, n, l, mid - 1);
    Node* rightRoot = convertBST(arr, n, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;
     
     return root;
}
int main(){

     int n; cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++) cin >> arr[i];

     Node* root = convertBST(arr,n, 0, n-1);
     
    LevelOrder(root);
    return 0;
}