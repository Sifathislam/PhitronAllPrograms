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
// create functin that add node on tail
void insert_Node_At_Tail(Node* &Head, int val){
    // create new node 
    Node* new_Node = new Node(val);
    if (Head == NULL)
    {
        cout << "New Node has been add to the Head"<< endl;
        Head = new_Node;
        return;
    }

    Node* tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_Node;
    cout << "New Node has been add to the Tail"<< endl;
}

// create function that add node on the position that user give
void insert_Node_At_Position(Node* Head, int pos,int val){
    // Create new node
    Node* new_Node = new Node(val);
    // Now Go position - 1
    Node* tmp = Head;
    for (int i = 1; i < pos - 1; i++)
    {
        cout << "inside the tmpofpos"<< endl;
        tmp = tmp->next;
    }
    new_Node->next = tmp->next;
    tmp->next = new_Node;
    cout << "New Node has been added to this " << pos << " Position"<< endl;
    
}

// create function for print those node 
void print_Node_Val(Node* Head){

    Node* tmp = Head;
    int i = 1;
    while (tmp != NULL)
    {
        cout <<"This is the value of "<<i<< " Number Node: " << tmp->val << endl << endl;
        tmp = tmp->next;
        i++;
    }
    
}


int main(){
    // This way can adde node on user input position 
    Node * Head = NULL;

    while (true)
    {
        cout << endl << endl;
        cout << "System No: 1] Insert Node On Tail"<< endl;
        cout << "System No: 2] Insert Node On Position"<< endl;
        cout << "System No: 3] Print Node Values"<< endl;
        cout << "System No: 4] Terminate the System program"<< endl;
        cout << endl << endl;

        int system_input; cin >> system_input;
        // Run the system according the input 
        if (system_input == 1)
        {
            cout << "Loading system 1......."<< endl;
            cout << "Please Enter the Value: ";
            int val; cin >> val;
            insert_Node_At_Tail(Head, val);
        }
        else if (system_input == 2)
        {
            cout << "Loading system 2......"<< endl;
            cout << "Please Enter the Position"<< endl;
            int pos; cin >> pos;
            cout << "Please Enter the Value"<< endl;
            int val; cin >> val;
            insert_Node_At_Position(Head, pos, val);
        }
        else if (system_input == 3)
        {
            cout << "Loading system 3........"<< endl;
            cout << "Printing The Node Values "<< endl<< endl;
            print_Node_Val(Head);
        }
        else{
            cout << "Loading system 4........"<< endl;
            cout << "System of Node Stoped"<< endl;
            break;
        }
        
        
        

    }
    

     

    return 0;
}