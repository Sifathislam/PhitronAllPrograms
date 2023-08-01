#include<bits/stdc++.h>
using namespace std;
// Create Double linked list 
class Node {
public:
  int val;
  Node *prev;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};
// Create Dobule Linked list 
void Insert_Double_Node(Node* &Head, Node* &Tail,int val){
    // Create new node 
    Node* newNode = new Node(val);
    // Checker 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        newNode->prev = Tail; // this for Double link 
        Tail = newNode;
    }
    
}
// Print forward and bakcward 
void Print_node_forward_Backword(Node* Head, Node* Tail){
    // Make temp pointers 
    Node* temp1 = Head;
    Node* temp2 = Tail;
    // Print 
    while (temp1 != NULL && temp2 != NULL)
    {
        cout << temp1->val << " " << temp2->val<< endl;
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }

}

int main(){
    // create pointer of double linked list 
    Node* Head = NULL;
    Node* Tail = NULL;

    // Take input from user 
    int val ;
    cin>> val;
    while (val != -1)
    {
        Insert_Double_Node(Head, Tail, val);
        cin>> val;
    }

    // Print reverse and normal 
    Print_node_forward_Backword(Head, Tail);
    


     

    return 0;
}