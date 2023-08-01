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

// sort the list 

void sort_node(Node* Head){
    for (Node* i = Head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
        
    }
    
}
// Remove the duplicate 
void Remove_duplicate(Node* Head){
    // check corner case 
    if (Head == NULL) return;
    // take temp 
    Node* temp = Head;
    while (temp->next != NULL)
    {
    if(temp->val == temp->next->val)
    {
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
    if(temp->next == NULL) break;
            
    else if(temp->val != temp->next->val)
    {
    temp = temp->next;
    }
    
}
}


// print the node 
void printNode(Node* Head){
    // take temp 
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val<< " ";
        temp = temp->next;
    }

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
    
    // sort the node accending 
    sort_node(Head);
    
    // Remove the duplicate
    Remove_duplicate(Head);

    // print the node 
    printNode(Head);
     

    return 0;
}