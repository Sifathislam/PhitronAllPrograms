// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void Insert_newNode(ListNode* &Head2,ListNode* &Tail2,int val){
//         ListNode* newNode = new ListNode(val);
//         if(Head2 == NULL){
//             Head2 = newNode;
//             Tail2 = newNode;
//             return;
//         }
//         Tail2->next = newNode;
//         Tail2 = newNode;
//     }
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* head2 = NULL;
//         ListNode* Tail2 = NULL;

//         ListNode* temp = head;
//         int sum = 0; 
//         while(temp->next != NULL){
//             temp = temp->next;
//             sum+= temp->val;
//             if(temp->val == 0){
//                 Insert_newNode(head2,Tail2, sum);
//                 sum = 0;
//             } 
//         }

//         return head2;
//     }
// };