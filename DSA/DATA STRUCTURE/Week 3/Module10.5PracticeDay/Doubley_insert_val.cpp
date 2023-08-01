#include<bits/stdc++.h>
using namespace std;
// Create node
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
// Insert at Head 
void insert_Head(Node* &Head,Node* &Tail,int val){
    // create new node 
    Node* newNode = new Node(val);
    // Check corner case 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    // Assing Head
    newNode->next = Head;
    Head->prev = newNode;
    Head = newNode; 
}
// Insert at Tail 
void insert_Tail(Node* &Head,Node* &Tail,int val){
    // create new node 
    Node* newNode = new Node(val);
    // Check corner case 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    // Assgin Tail 
    Tail->next = newNode;
    newNode->prev = Tail;
    Tail = newNode;
}
// Insert at Position 
void insert_any_pos(Node* Head,Node* Tail,int val, int pos){
    // create node
    Node* newNode = new Node(val);
    // Take temp 
    Node* temp = Head;
    // Assing to the positon 
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
      
}
// Print the list forward             
void print_forward(Node* Head){
    // Take temp 
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Print the list backward             
void print_backward(Node* Tail){
    // Take temp 
    Node* temp = Tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// Find the size of the nodes 
int size_Node(Node* Head){
    // Take pointers 
    Node* temp = Head;
    int cnt = 0; //take size 
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(){
    // Take pointers / 
    Node* Head = NULL;
    Node* Tail = NULL;
    //  Take input of quareys 
    int Q ; cin >> Q;
    while (Q--)
    {
        int val, pos; cin >> pos >> val;

        if (pos > size_Node(Head) && pos < 0)
        {
            cout << "Invalid"<< endl;
        }
        else if (pos == 0)
        {
            insert_Head(Head,Tail,val);
            print_forward(Head);
            print_backward(Tail);

        }
        else if (pos == size_Node(Head))
        {
            insert_Tail(Head,Tail,val);
            print_forward(Head);
            print_backward(Tail);
        }
        else{
            insert_any_pos(Head, Tail, val, pos);
            print_forward(Head);
            print_backward(Tail);
        }

    }
    

    return 0;
}