// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
		

// 	public:
// 	int minOperations(string a, string b) 
// 	{ 
// 	    int n = a.size();
// 	    int m = b.size();
	    
// 	    int dp[n + 1][m + 1];
	    
// 	    for(int i = 0; i <= n; i++){
// 	        for(int j = 0; j <= m; j++){
// 	            if(i == 0 || j == 0){
// 	                dp[i][j] = 0;
//         	        continue;
// 	            }
	            
// 	            if(a[i - 1] == b[j - 1]){
// 	                dp[i][j] = dp[i - 1][j - 1] + 1;
// 	            }
	            
// 	            else{
// 	                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
// 	            }
// 	        }
// 	    }
	    
// 	    return abs(n - dp[n][m]) + abs(m - dp[n][m]);
	    
// 	} 
// };

// //{ Driver Code Starts.
// int main() 
// {
   	
   
//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;

// 	    Solution ob;
// 	    cout << ob.minOperations(s1, s2) << "\n";
	     
//     }
//     return 0;
// }


// // } Driver Code Ends