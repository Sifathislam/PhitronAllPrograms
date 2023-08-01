#include<bits/stdc++.h>
using namespace std;
// Creator of Node Double Linked List 
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
// Printe linked list 
void print_linked_list_forward(Node* Head){
    // Create pointer for terverse
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}
void print_linked_list_backword(Node* Head){
    // Create pointer for terverse
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    
}

int main(){
    // Create two pointers
    Node* Head = NULL;
    // Node* Tail = NULL;

    // Create nodes 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Connection liked list 
    Head = a;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    
    


    // Print the linked list 
    print_linked_list_forward(Head);
     cout << endl;
    print_linked_list_backword(Head);

    return 0;
}