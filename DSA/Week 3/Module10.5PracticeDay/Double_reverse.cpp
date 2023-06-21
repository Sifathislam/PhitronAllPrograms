#include<bits/stdc++.h>
using namespace std;
// Create Doubly node
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

// Insert Double 
void insert_Double(Node* &Head,Node* &Tail, int val)
{
    // Create new Node 
    Node* newNode = new Node(val);
    // Check corner case 
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
    
}
// Reverse the Doubly 
void Reverse_doubly(Node* Head, Node* Tail){
    // Take pointers 
    Node* i = Head;
    Node* j = Tail;
    // Sawping the values 
   while (i != j && j->next != i)
   {
    swap(i->val, j->val);
     i = i->next;
     j = j->prev;
   }
   
}

// Print the doubly   
void print_doubly(Node* Head){
    // take tamp 
    Node* tamp = Head;
    while (tamp != NULL)
    {
        cout<< tamp->val << " ";
        tamp = tamp->next;
    }
    cout << endl;
}

int main(){
    
    // Create pointers 
    Node* Head = NULL;
    Node* Tail = NULL;
    
    // Take input 
    int val; cin >> val;
    while (val != -1)
    {
        insert_Double(Head, Tail, val);
        cin >> val;
    }
    
    // Reverse the doubly 
    Reverse_doubly(Head, Tail);

    // print the final result 
    print_doubly(Head);
     

    return 0;
}