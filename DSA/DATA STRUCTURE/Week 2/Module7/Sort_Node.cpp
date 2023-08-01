#include<bits/stdc++.h>
using namespace std;
// Create Node 
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
//Function  Input Node 
void InsertNode(Node* &head , Node* &Tail, int val)
{
    // Create new node 
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
}
    // Output Show function
void output_Node (Node* head){
    // Best practice to take head to temp 
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->val <<" ";
        temp = temp->next;
    }
    
}
// Sort the Node 
void selection_sort_accending(Node* head){
    for (Node* i = head; i->next != NULL; i= i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
        
    }
    
} 
void selection_sort_deccending(Node* head){
    for (Node* i = head; i->next != NULL; i= i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
        
    }
    
} 
int main(){
    // Make a head pointer 
    Node* head = NULL;
    Node* Tail = NULL;
    while (true)
    {
        cout << endl<<endl;
        cout << "System NO:1] Insert Node"<< endl;
        cout << "System NO:2] Sort Accending"<< endl;
        cout << "System NO:3] Sort Decending"<< endl;
        cout << "System NO:4] Output Linked List"<< endl;
        cout << endl<<endl;
        
        cout << "Give system input:";
        int sys_input; cin >> sys_input;
        if (sys_input == 1)
        {
            int val;
            while (true)
            {
                cin >> val;
                if(val == -1) break;
                InsertNode(head,Tail, val);
            }
            
        }
        else if (sys_input == 2)
        {
            selection_sort_accending(head);
        }
        else if (sys_input == 3)
        {
            selection_sort_deccending(head);
        }
        else if (sys_input == 4)
        {
           output_Node(head);
        }
        
        else{
            break;
        }
        
    }

    
     

    return 0;
}