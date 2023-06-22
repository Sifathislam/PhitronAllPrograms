#include<bits/stdc++.h>
using namespace std;
// Create Node 
class Node {
public:
  string val;
  Node *prev;
  Node *next;
  // Create an constructor
  Node(string val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

// Inset Node 
void insert_tail(Node* &Head,Node* &Tail,string val){
    // Create new node 
    Node* newNode= new Node(val);
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

// create visit 
void Find_Print(Node* Head,string &visit_to,string found_or_not){
    // Take temp 
    Node* temp = Head;
    bool flag = false;
    while (temp != NULL)
    {
        if (temp->val == found_or_not)
        {
            flag = true;
            visit_to = found_or_not;
            break;
        }
        temp = temp->next;
    }
    if (flag == true)
    {
        cout << visit_to << endl;
    }
    else
    {
        cout << "Not Available"<< endl;
    }
    
}

// Print previous
void prev_print(Node* Head,string &visit_to){
// Take temp 
    Node* temp = Head;
    
    while (temp != NULL)
    {
        if (temp->val == visit_to)
        {
            if (temp->prev == NULL)
            {
                cout << "Not Available"<< endl;
                return;
                break;
            }
            else
            {
                cout << temp->prev->val<< endl;
                visit_to = temp->prev->val;
                return;
                break;
            }   
        }

        temp = temp->next;
    }
        cout << "Not Available"<< endl;
}

// Print previous
void next_print(Node* Head,string& visit_to){
// Take temp 
    Node* temp = Head;

    while (temp != NULL)
    {
        if (temp->val == visit_to)
        {
            if (temp->next == NULL)
            {
                cout << "Not Available"<< endl;
                return;
                break;
            }
            else
            {
                cout << temp->next->val<< endl;
                visit_to = temp->next->val;
                return;
                break;
            }   
        }

        temp = temp->next;
    } 
    cout << "Not Available"<< endl;
}

int main(){
    // create pointers 
    Node* Head = NULL;
    Node* Tail = NULL;

    // inset input 
    string val; cin >> val;
    while (val != "end")
    {
        insert_tail(Head, Tail, val);
        cin >> val;
    }
    int Q; cin >> Q;
    string visit_to; 
    while (Q--)
    {
        string check; cin >> check;
        if (check == "visit")
        {
            string found_or_not;
            cin >> found_or_not;
            Find_Print(Head, visit_to,found_or_not);
        }
        else if (check == "prev")
        {
            prev_print(Head,visit_to);
        }
        else if (check == "next")
        {
            next_print(Head,visit_to);
            
        }
        
        
    }
    
    return 0;
}