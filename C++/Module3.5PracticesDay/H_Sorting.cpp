#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cin >> n;
    
    int arry[n];
     for (int i = 0; i < n; i++)
     {
        cin >> arry[i];
     }
     
     sort(arry, arry + n);

     for (int i = 0; i < n; i++)
     {
        if (i >= 1){cout << " ";}
        cout << arry[i];
     }
     

    return 0;
}