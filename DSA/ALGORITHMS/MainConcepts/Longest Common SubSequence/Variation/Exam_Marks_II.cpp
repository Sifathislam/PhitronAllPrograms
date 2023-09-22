#include<bits/stdc++.h>
using namespace std;
int Dp[1005][1005];
bool UnboundSubset(int n,int arr[],int s){
     
    //  Base case 
    if(n == 0){
        if(s == 0) return true;
        else return false;
    }
    if(Dp[n][s] != -1) return Dp[n][s];
    if(s >= arr[n - 1]){
        bool oparation1_nibo = UnboundSubset(n, arr, s - arr[n - 1]);
        bool oparation2_nobona = UnboundSubset(n - 1 , arr, s);

        return Dp[n][s] = oparation1_nibo || oparation2_nobona;
    }
    else{
        return Dp[n][s] = UnboundSubset(n - 1, arr, s);
    }

}
int main(){
    int testcase; cin>> testcase;
    while (testcase--)
    {
        int n, t; cin >> n >> t;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        int defference = abs(t - 1000);
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= defference; j++)
            {
                Dp[i][j] = -1;
            }
            
        }
        
        bool result = UnboundSubset(n,arr,defference);
        
        if(result){
             cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    

    return 0;
}