// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        
//         // Make a vector that has the missing value O(N)
//         vector<int> v;
//         for(int i = 0; i <= nums.size(); i++){
//             v.push_back(i);
//         }

//         // make a priority queue for sort the give arry in decending in O(N); 
//         priority_queue <int> pq;
//         for(int i = 0; i < nums.size(); i++){
//             pq.push(nums[i]);
//         }

//         // reverse the arry for the get the geater value first in O(N)
//         reverse(v.begin(), v.end());

//         // Find the missing in O(N)
//         int n = -1;
//         int sizeOfPq = pq.size();
//         for(int i = 0; i < sizeOfPq; i++){
//             if(pq.top() != v[i]) n = v[i];
//             else pq.pop();
//         }

//         // print the result
//         if(n == -1) return v[v.size()-1];
//         else return n;


        
//     }
// };