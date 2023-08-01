#include<bits/stdc++.h>
using namespace std;
// create Node 
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
// Create function that take input NOde 
void insert_Node(Node* &Head,Node* &Tail,int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // Check Head NULL or NOT 
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
        return;
    }
    // IF Head not NULL 
    Tail->next = newNode;
    Tail = newNode;


}
// print the result 
void print_Node_recursion(Node* Head){
    // Base case 
    // Take the pointer of the head node best practices
    if (Head == NULL)
    {
     return;   
    }
    print_Node_recursion(Head->next);
    cout<< Head->val<< " ";
    

}
int main(){
    
    // Create Head and Tail Pointer 
    Node* Head = NULL;
    Node* Tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        // if -1 than Breake 
        if (val == -1) break;
        insert_Node(Head, Tail,val);
    }

     print_Node_recursion(Head);
    

     

    return 0;
}