#include<bits/stdc++.h>
using namespace std;
// Create Double Node 
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
// Find the size of the Linked list 
int size_Node(Node* Head){
    // Make counter 
    int cnt = 0;
    // Create pointer 
    Node* temp = Head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
   return cnt; 
}
// Check same or not 
bool check_same_forward(Node* Head_1, Node* Head_2){
    // take tmp 
    Node* tmp_1 = Head_1;
    Node* tmp_2 = Head_2;
    // Use flag to trace the same node 
    bool flag = true;
    // check the same 
    while (tmp_1 != NULL && tmp_2 != NULL)
    {
        if (tmp_1->val != tmp_2->val)
        {
            flag = false;
            break;
        }
        tmp_1 = tmp_1->next;
        tmp_2 = tmp_2->next;
    }

    return flag;
}
// Check same or not 
bool check_same_backword(Node* Tail_1, Node* Tail_2){
    // take tmp 
    Node* tmp_1 = Tail_1;
    Node* tmp_2 = Tail_2;
    // Use flag to trace the same node 
    bool flag = true;
    // check the same 
    while (tmp_1 != NULL && tmp_2 != NULL)
    {
        if (tmp_1->val != tmp_2->val)
        {
            flag = false;
            break;
        }
        tmp_1 = tmp_1->prev;
        tmp_2 = tmp_2->prev;
    }

    return flag;
}

int main(){

    // Create pointers 
    Node* Head_1 = NULL;
    Node* Head_2 = NULL;
    Node* Tail_1 = NULL;
    Node* Tail_2 = NULL;

    // Take input value First Doubly
    int val_1; cin >> val_1;
    while (val_1 != -1)
    {
        insert_Doubly(Head_1, Tail_1, val_1);
        cin >> val_1;
    }
    // Take input value Secenod Doubly
    int val_2; cin >> val_2;
    while (val_2 != -1)
    {
        insert_Doubly(Head_2, Tail_2, val_2);
        cin >> val_2;
    }
    
    // Check Same or not 
    if (size_Node(Head_1) == size_Node(Head_2) && check_same_forward(Head_1,Head_2) && check_same_backword(Tail_1,Tail_2))
    {
        cout << "YES"<< endl;
    }
    else{
        cout << "NO"<< endl;
    }
    



     

    return 0;
}