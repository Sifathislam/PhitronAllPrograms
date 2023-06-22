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
//  int find_size(ListNode* head){
//         ListNode* temp = head;
//         int count = 0;
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head == NULL) return head;
//         int size = find_size(head);

//         ListNode* temp_1 = head;
//         for(int i = 1; i < k;i++){
//             temp_1 = temp_1->next;
//         }

//         ListNode* temp_2 = head;
//         for(int i = 1; i <=size-k; i++){
//             temp_2 = temp_2->next;
//         }
//         swap(temp_1->val,temp_2->val);
//         return head;
//     }
// };