// https://leetcode.com/problems/shortest-common-supersequence/description/

// class Solution
// public:
//     string shortestCommonSupersequence(string a, string b) {
//         int n = a.size();
//         int m = b.size();

//         int dp[n + 1][m + 1];

//         for(int i = 0; i <= n; i++){
//             for(int j = 0; j <= m; j++){
//                 if(i == 0 || j == 0){
//                     dp[i][j] = 0;
//                     continue;
//                 }

//                 if(a[i - 1] == b[j - 1]){
//                     dp[i][j] = dp[i - 1][j - 1] + 1;
//                 }
//                 else{
//                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                 }
//             }
//         }

//         int i = n;
//         int j = m;
//         string s;

//         while(i != 0 && j != 0){
//             if(a[i - 1] == b[j - 1]){
//                 s+= a[i - 1];
//                 i--;
//                 j--;
//             }

//             else{
//                 if(dp[i - 1][j] > dp[i][j - 1]){
//                     s+= a[i - 1];
//                     i--;
//                 }
//                 else{
//                     s+= b[j - 1];
//                     j--;
//                 }
//             }
//         }
//         while (i != 0){
//             s+= a[i - 1];
//             i--;
//         }
//         while(j != 0){
//             s+= b[j - 1];
//             j--;
//         }
//         reverse(s.begin(), s.end());

//         return s;
//     }
// };