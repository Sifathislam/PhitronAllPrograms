#include<bits/stdc++.h>
using namespace std;
// create the doubly 
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

class myStack{
    public:
    
    // Create the pinters 
    Node* Head = NULL;
    Node* Tail = NULL;
    int s = 0;

    // Make Oparations
    
    void push (int val){
        s++;
        // create the new node 
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            newNode->prev = Tail;
            Tail = newNode;
        }
    }

    void pop(){
        // Create the delete node
        Node* deleteNode = Tail;
        Tail = Tail->prev;
        delete deleteNode;
        s--;
    }

    int top(){
        return Tail->val;
    }
    
    int size(){
        return s;
    }

    bool empty(){
        if(s == 0) return true;
        else return false;
    }

};


class myQueue{
    public:
    
    // Create the pinters 
    Node* Head = NULL;
    Node* Tail = NULL;
    int s = 0;

    // Make Oparations
    
    void push (int val){
        s++;
        // create the new node 
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            newNode->prev = Tail;
            Tail = newNode;
        }
    }

    void pop(){
        // Create the delete node
        Node* deleteNode = Head;
        Head = Head->next;
        delete deleteNode;
        s--;
    }
    
    int front(){
        return Head->val;
    }
    int size(){
        return s;
    }

    bool empty(){
        if(s == 0) return true;
        else return false;
    }

};

int main(){
    
    // Create the queue and stack 
    myQueue q;
    myStack st;

    // Take input of n and m 
    int n, m; cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    
    // Take input of stack
    while (n--)
    {
        int x; cin >> x;
        st.push(x);
    }

    // Take input of queue 
    while (m--)
    {
        int x; cin >> x;
        q.push(x);
    }    

    bool flag = true;
    while (!q.empty())
    {
        if (q.front() != st.top())
        {
            flag = false;
            break;
        }
        q.pop();
        st.pop();   
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}