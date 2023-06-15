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
void print_Node(Node* Head){
    // Take the pointer of the head node best practices
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout<< Temp->val << " ";
        Temp = Temp->next;
    }

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

     print_Node(Head);
    

     

    return 0;
}