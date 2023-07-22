#include<bits/stdc++.h>
using namespace std;
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
    // Create the pointers 
    Node* Head = NULL;
    Node* Tail = NULL;
    int sz = 0;

    // Create oprations 
    void push(int val){
        // create the node 
        sz++;
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
        if (sz == 0)return;

        Node* deleteNode = Tail;
        Tail = Tail->prev;
        delete deleteNode;
        Tail->next = NULL;
        sz--;
    }

    int top(){
        if(sz == 0) return -1;

        return Tail->val;
    }

    bool empty(){
        if(sz == 0) return true;
        else return false;
    }

    int size (){
        return sz;
    } 


};
int main(){

     myStack st;

     int q; cin >> q;
     while (q--)
     {
        int i; cin >> i;
        if (i == 0)
        {
            int val; cin >> val;
            st.push(val);
        }
        else if (i == 1)
        {
            st.pop();
        }
        else{
            cout << " " << st.top() << " ";
        }
        

        
     }
     

    return 0;
}