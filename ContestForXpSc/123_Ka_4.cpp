#include<bits/stdc++.h>
using namespace std;

int main(){

     int n; cin >> n;
    if(n == 1){
        cout << 1 ;
         return 0;
    }
     for (int i = 1; i <= n; i++)
     {
        for (int j = 1; j <= n; j++)
        {
            if(i == 1){
                cout << j;
                continue;
            }
            if(j == 1){
                cout << i;
                continue;
            }
             if(i == n){
                cout << n;
                continue;
            }
            if(j >=2 && j <= n - 1){
                cout << " ";
                continue;
            }
            if(j == n){
                cout << n;
                continue;
            }
           
        }
        cout << endl;
     }
     

    return 0;
}