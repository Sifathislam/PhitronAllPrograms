#include<bits/stdc++.h>
using namespace std;
// Create Node 
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

// Insert Double Node on linked list 
void insert_Doubly(Node* &Head, Node* &Tail, int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // check corner case 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
    
}
// Create accending order sort 
void Sort_accending(Node* Head){
    for (Node* i = Head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if (i->val >= j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
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
        insert_Doubly(Head, Tail, val);
        cin >> val;
    }
    
    // Call acending funcition 
    Sort_accending(Head);

    // print the result
    print_doubly(Head);
    

    return 0;
}