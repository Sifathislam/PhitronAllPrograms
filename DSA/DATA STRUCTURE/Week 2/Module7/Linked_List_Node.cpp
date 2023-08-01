#include<bits/stdc++.h>
using namespace std;
// Create and Data type for Node 
class Node{
    public:
    int val;
    Node* next;

    Node (int val){
        this->val = val;
        this->next= NULL;
    }
};
// Creae print function
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
    // We need to ad node and make and LINKED LIST 
    Node* Head = new Node(10); 
    Node* One = new Node(100); 
    Node* Two = new Node(200); 
    Node* Three = new Node(300); 
    // Connctions build by adding adress of the next node on the next pointer  
    Head->next = One;
    One->next = Two;
    Two->next = Three;
    // Print the value form those node that are connected each other 
    print_Node(Head);
    
    cout <<endl<<"The Node has been printed"<< endl;


     

    return 0;
}