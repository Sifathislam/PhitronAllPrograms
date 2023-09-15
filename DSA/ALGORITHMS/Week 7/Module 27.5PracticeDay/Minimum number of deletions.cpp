// // https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// int minDeletions(string str, int n);

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
        
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         cout << minDeletions(s, n) << endl;

//     }
// return 0;
// }
// // } Driver Code Ends


// int minDeletions(string a, int n) { 
    
//     string b = a;
//     reverse(b.begin(), b.end());
    
//     int dp[n + 1][n + 1];
    
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= n; j++){
//             if(i == 0 || j == 0){
//                 dp[i][j] = 0;
//                 continue;
//             }
            
//             if(a[i - 1] == b[j - 1]){
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             }
//             else{
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
    
//     return abs(n - dp[n][n]);
// }