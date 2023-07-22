#include<bits/stdc++.h>
using namespace std;
// Create node single 
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
void insert_tail(Node* &Head, Node* &Tail, int val){
    // create new node 
    Node* newNode = new Node(val);
    // check corner case 
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        Tail = newNode;
    }
}
// Reverse the singley 
void Reverse_Singly(Node* &head,Node* curent)
{
    // Basecase 
    if(curent->next == NULL){
        head = curent;
        return;
    }
    Reverse_Singly(head, curent->next);
    curent->next->next = curent;
    curent->next = NULL;
    return;
    }

// Check Palindrome
bool check_palindrome(Node* &Head,Node* &Tail,int val){
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* temp = Head;
    while(temp != NULL){
        insert_tail(newHead,newTail,temp->val);
        temp = temp->next;
    }
    Reverse_Singly(newHead, newHead);
    temp = Head;
    Node* temp2 = newHead;
    while(temp != NULL){
        if(temp->val != temp2->val){
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    
    return true;
    
}

int main(){
    // create pointer 
    Node* Head = NULL;
    Node* Tail = NULL;

    // Take node input 
    int val ; cin >> val;
    while (val != -1)
    {
        insert_tail(Head, Tail, val);
        cin >> val;
    }
    if (Head == NULL)
    {
        cout << "Invalid";
    }
    else{

    bool flag = check_palindrome(Head,Tail,val);
    

    if (flag == true)
    {
        cout << "YES"<< endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    }
    
     

    return 0;
}