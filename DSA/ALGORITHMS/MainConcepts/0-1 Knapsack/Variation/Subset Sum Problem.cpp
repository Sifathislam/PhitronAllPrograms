// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h> 
// using namespace std; 

// // } Driver Code Ends
// //User function template for C++

// class Solution{   
// public:
//     bool isSubsetSum(vector<int>arr, int s){
//         int n = arr.size();
//          bool Dp[n + 1][s + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= s; j++)
//         {
//             // Base case like 
//             if(i == 0 && j == 0){
//                 Dp[i][j] = true;
//                 continue;
//             }
//             if(i == 0){
//                 Dp[i][j] = false;
//                 continue;
//             }
            
//             // main Tabulation 
//             if(j >= arr[i - 1]){
//                 // bool opt1_nibo = Dp[i - 1][j - arr[i - 1]];
//                 // bool opt2_nibo_na = Dp[i - 1][j];

//                 Dp[i][j] = Dp[i - 1][j - arr[i - 1]] || Dp[i - 1][j]; 
//             }
//             else{
//                 Dp[i][j] = Dp[i - 1][j];
//             }
//         }
        
//     }
//         return Dp[n][s];
//     }
// };

// //{ Driver Code Starts.
// int main() 
// { 
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int N, sum;
//         cin >> N;
//         vector<int> arr(N);
//         for(int i = 0; i < N; i++){
//             cin >> arr[i];
//         }
//         cin >> sum;
        
//         Solution ob;
//         cout << ob.isSubsetSum(arr, sum) << endl;
//     }
//     return 0; 
// } 

// // } Driver Code Ends