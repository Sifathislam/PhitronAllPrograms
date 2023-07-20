#include<bits/stdc++.h>
using namespace std;
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
class myQueue{
    public:
    // Create nodes 
    Node* Head =  NULL;
    Node* Tail =  NULL;
    int sz = 0;

    void Queue(){

    }

    void push(int val){
        sz++;
        // Create new node 
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            Tail = newNode;
        }

    }

    void pop(){
        sz--;
        Node* deleteNode = Head;
        Head = Head->next;
        if(Head == NULL){
            Tail = NULL;
        }
        delete deleteNode;
    }
    
    int front(){
        return Head->val;
    }

    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0) return true;
        else return false;
    }
    

};
int main(){

     myQueue QueueOne;
    
    int n; cin >> n;
    while (n--)
    {
        int val; cin >> val;
        QueueOne.push(val);
    }
    

    while (!QueueOne.empty())
    {
        cout << QueueOne.front() << " ";
        QueueOne.pop();
    }

    return 0;
}