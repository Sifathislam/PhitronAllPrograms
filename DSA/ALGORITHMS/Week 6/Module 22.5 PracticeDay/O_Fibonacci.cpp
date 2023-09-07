#include<bits/stdc++.h>
using namespace std;
long long int dp[1000];
long long int fibonacci(long long int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;

    if(dp[n] != -1) return dp[n];
    int ans1 = fibonacci(n - 1);
    int ans2 = fibonacci(n - 2);

    return dp[n] = ans1 + ans2;
}
int main(){

     long long int n; cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    
    cout << fibonacci(n);

    return 0;
}