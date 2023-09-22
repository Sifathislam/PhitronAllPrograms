// https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function template for C++


// class Solution
// {
//     public:
//     //Function to find length of shortest common supersequence of two strings.
//     int shortestCommonSupersequence(string a, string b, int m, int n)
//     {
//         int dp[m + 1][n + 1];
        
//         for(int i = 0; i<= m; i++){
//             for(int j = 0; j<= n; j++){
//                 if(i == 0 || j == 0){
//                     dp[i][j] =  0;
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
        
//        return abs(dp[m][n] - (n + m));
//     }
// };

// //{ Driver Code Starts.

// int main()
// {   
    
//     int t;
    
//     //taking total testcases
//     cin >> t;
//     while(t--){
//     string X, Y;
//     //taking String X and Y
// 	cin >> X >> Y;
	
// 	//calling function shortestCommonSupersequence()
// 	Solution obj;
// 	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
//     }
// 	return 0;
// }


// // } Driver Code Ends