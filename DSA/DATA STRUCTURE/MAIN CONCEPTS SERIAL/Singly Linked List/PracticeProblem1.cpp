// Problem set 
// Take a singly linked list as input and print the size of the linked list.
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

// Create Function that input values to the Node 
void Insert_Value_Node(Node* &Head,int val){                                 /// System: 1
    // Create Node With new Value 
    Node* newNode = new Node(val);
    // Create head if Head Is NULL 
    if(Head == NULL){
        Head = newNode;
        return;
    }
    // If Head is Not NULL Than Do This 
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
 }

// Create Function that Find the Size of Nodes or output the value count 
void GetOutput(Node* Head){                                               /// System: 2
    // Error Case Handle 
    if (Head == NULL)
    {
        cout <<"Please First Make Node Then Print Sizes "<< endl; 
    }
    else{
    // For Safety We use Temp for itaration
    Node* temp  = Head;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
        count++;
    }
    cout << "The Linked List Size is "<< count<< endl;
    }
} 


int main(){
    
    // Create an Header Pointer 
    Node* Head = NULL;

    // Make System For Better Work 
    while (true)
    {
    cout << endl;
    cout << "System NO:1]-> Want to Give Input"<< endl;
    cout << "System NO:2]-> Want to Get Output"<< endl;
    cout << "System NO:3]-> Want to Terminate the Program"<< endl;
    cout << endl;
    cout << "Input The System:";
    int sys_input; cin >> sys_input;
    if (sys_input == 1)
    {
        cout << "System 1 runing......"<< endl;
        cout << "Give your values: ";
        int val; 
        while (true)
        {
            // Erorr case Handle 
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else{
            Insert_Value_Node(Head, val);
            }
            
        }
        cout << "Node has been Created" << endl;
        
    }
    else if (sys_input == 2)
    {
        cout << "Getting output from the function"<<endl;
        GetOutput(Head);
    }
    else{
        cout << "Terminating the program ...."<< endl;
        break;
    }

    
    }
    





    return 0;
}