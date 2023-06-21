/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int find_Size(ListNode* head){
        // crearte temp 
        ListNode* temp = head;
        // counter
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
        
    }
    ListNode* middleNode(ListNode* head) {
        int sz = find_Size(head);
        ListNode* temp = head;
        for(int i = 1; i<= sz/2 ; i++){
            temp = temp->next;
        }
        return temp;
    }
};