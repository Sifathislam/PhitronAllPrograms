#include<bits/stdc++.h>
using namespace std;
// Create Node 
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
// Check the palindrome 
bool check_palindrome(Node* Head,Node* Tail){
    // use flag for check 
    bool flag = true;
    // Take pointer 
    Node* i = Head;
    Node* j = Tail;
    while (i != j && j->next != i)
    {
        if (i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
        
    }
    return flag;
}
int main(){
    
    // Create pointers 
    Node* Head = NULL;
    Node* Tail = NULL;
    
    // Take input 
    int val; cin >> val;
    while (val != -1)
    {
        insert_Doubly(Head, Tail, val);
        cin >> val;
    }
    
    if (Head == NULL)
    {
        cout << "Give Proper value ";
    }
    else
    {
        bool flag =  check_palindrome(Head, Tail);

        if (flag == true)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }


    return 0;
}