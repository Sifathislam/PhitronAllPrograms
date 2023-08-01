// Problem Link:https://leetcode.com/problems/sort-an-array/
// class Solution {
// public: 
//     void SortArr(vector<int> &nums){
//         priority_queue<int, vector<int>,greater<int> > pq;
//         int sizeOfvector = nums.size();
//         while(sizeOfvector--){
//             pq.push(nums.back());
//             nums.pop_back();
//         }

//         while(!pq.empty()){
//             nums.push_back(pq.top());
//             pq.pop();
//         }
//     }

//     vector<int> sortArray(vector<int>& nums) {
//         SortArr(nums);
//         return nums;
//     }
// };