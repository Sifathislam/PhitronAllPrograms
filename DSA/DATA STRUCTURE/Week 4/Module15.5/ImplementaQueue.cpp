// // Coding nijja problem 
//  #include <bits/stdc++.h> 
// class Node{
//     public:
//     int val;
//     Node *next;

//     Node(int val){
//         this-> val = val;
//         this-> next = NULL;
//     }
// };

// class Queue {
// public:
//     // creating the pointers
//     Node* Head = NULL;
//     Node* Tail = NULL;
//     int size = 0; 
    
//     Queue() {
//         // Implement the Constructor
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(size == 0) return true;
//         else return false;
//     }

//     void enqueue(int data) {
//         size++;
//         // create the node
//         Node* newNode = new Node(data);
//         if(Head == NULL){
//             Head = newNode;
//             Tail = newNode;
//         }
//         else{
//             Tail->next = newNode;
//             Tail = newNode;
//         }
//     }

//     int dequeue() {
//         if(size != 0){
//             Node* deleteNode = Head;
//             int dequeueVal = deleteNode->val;
//             Head = Head->next ;
//             delete deleteNode;
//             size--;
//             return dequeueVal;

//         }
//         else{
//             return -1;
//         }
//     }

//     int front() {
//            if(size != 0){
//             return Head->val;

//         }
//         else{
//             return -1;
//         }
        
//     }
// };