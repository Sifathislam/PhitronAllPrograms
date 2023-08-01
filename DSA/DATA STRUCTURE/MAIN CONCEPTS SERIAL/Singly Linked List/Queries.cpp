#include<bits/stdc++.h>
using namespace std;
// Create Node 
class Node {
public:
  int val;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
// Input head And Taill
void Insert_Head_Tail(Node* &Head, Node* &Tail,int val, int X){
    // Create new Node 
    Node* newNode = new Node(val);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        cout << Head->val << " " << Tail->val;
    }
    
    else if (X == 0)
    {
        Head = newNode;
        cout << Head->val<< " "<< Tail->val;
    }
    else if (X == 1)
    {
        Tail->next = newNode;
        Tail = newNode;
        cout << Head->val << " " << Tail->val;
    }
    
} 

int main(){
    // Create Pointers 
    Node* Head = NULL;
    Node* Tail = NULL;
    
    // Take input of quarris
    int Q; cin>> Q;
    while (Q--)
    {
        // Take input of x and val 
        int X , val; cin >> X >> val;
        Insert_Head_Tail(Head,Tail, val, X);
        cout << endl;
    }
    

     

    return 0;
}