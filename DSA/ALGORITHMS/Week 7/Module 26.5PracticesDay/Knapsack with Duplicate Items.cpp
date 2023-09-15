// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution{
// public:
//     int dp[1005][1005];
//     int unKnapsack(int n,int w,int val[],int wt[]){
//         if(n == 0 || w == 0) return 0;
        
//         if(dp[n][w] != -1){
//             return dp[n][w];
//         }
        
//         if(w >= wt[n- 1]){
//             return dp[n][w] = max(unKnapsack(n, w - wt[n - 1], val,wt) + val[n - 1] , unKnapsack(n - 1, w, val, wt));
//         }
//         else{
//             return dp[n][w] = unKnapsack(n - 1, w, val, wt);
//         }
//     }
    
//     int knapSack(int n, int w, int val[], int wt[])
//     {
//         for(int i = 0; i <= n; i++){
//             for(int j = 0; j <= w; j++){
//                 dp[i][j] = -1;
//             }
//         }
        
//         int Unbound = unKnapsack(n, w, val, wt);
        
//         return Unbound;
//     }
// };

// //{ Driver Code Starts.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int N, W;
//         cin>>N>>W;
//         int val[N], wt[N];
//         for(int i = 0;i < N;i++)
//             cin>>val[i];
//         for(int i = 0;i < N;i++)
//             cin>>wt[i];
        
//         Solution ob;
//         cout<<ob.knapSack(N, W, val, wt)<<endl;
//     }
//     return 0;
// }
// // } Driver Code Ends