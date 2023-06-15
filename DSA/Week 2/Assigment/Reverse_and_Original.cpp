// ake a singly linked list as input and print the reverse of the linked list.
#include<bits/stdc++.h>
using namespace std;
// Create node
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

// Create function that take input in node 
void Insert_Node(Node* &Head, Node* &Tail, int val){
    // Create new node 
    Node* newNode = new Node(val);
    // Check head null or not 
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
}

// Print the reverse of the linked list by recursive 
void Print_LinkedList_Recursive_Reverse(Node* Head){
    // Check the if the head go null stop the function
    if (Head == NULL)
    {
        return;
    }
    Print_LinkedList_Recursive_Reverse(Head->next);
    cout<< Head->val<< " ";
    
}
void Print_LinkedList_Recursive_Normal(Node* Head){
    // Check the if the head go null stop the function
    if (Head == NULL)
    {
        return;
    }
    cout<< Head->val<< " ";
    Print_LinkedList_Recursive_Normal(Head->next);
    
}


int main(){
    // Create The ponters 
    Node* Head = NULL;
    Node* Tail = NULL;

    int val ;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Insert_Node(Head, Tail, val);
    }

    // Calll reaverse function
    Print_LinkedList_Recursive_Reverse(Head);
    cout << endl;
    Print_LinkedList_Recursive_Normal(Head);
    

     

    return 0;
}
