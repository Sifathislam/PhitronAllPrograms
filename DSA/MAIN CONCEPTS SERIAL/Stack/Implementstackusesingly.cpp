// // Coding nijja problem 
// /****************************************************************
 
//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// *****************************************************************/

// class Stack
// {
//     //Write your code here

// public:
//     // Creating the pointers 
//     Node* Head = NULL;
//     int sz = 0;
//     Stack()
//     {
       
//     }

//     int getSize()
//     {
//         return sz;
//     }

//     bool isEmpty()
//     {
//        if(sz == 0) return true;
//        else return false; 
//     }

//     void push(int data)
//     {
//         sz++;
//         // creating the the node 
//         Node* newNode = new Node(data);

//         if(Head == NULL){
//             Head = newNode;
//         }
//         else{
//          newNode->next = Head;
//          Head = newNode;
//         }
//     }

//     void pop(){

//         if(sz != 0){
//         Node* deleteNode = Head;
//         Head = Head->next;
//         sz--;
//         delete deleteNode;
//         }
//         else {
//             return;
//         }
//  } 

//     int getTop() {
//       if (sz != 0)
//         return Head->data;
//       else
//         return -1;
//     }


// };