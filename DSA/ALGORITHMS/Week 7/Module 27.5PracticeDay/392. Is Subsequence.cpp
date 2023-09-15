// https://leetcode.com/problems/is-subsequence/description/
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         if(s.empty() && t.empty()) return true;
//         int n = s.size();

//         int x = 0;
//         for(auto a : t){
//             if(a == s[x]){
//                 x++;
//             }

//             if(x == n){
//                 return true;
//                 break;
//             }
//         }
        
//         return false;
        
//     }
// };