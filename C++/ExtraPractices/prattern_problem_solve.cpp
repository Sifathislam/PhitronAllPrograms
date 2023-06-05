#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cin >> n;
     int orginal = n;
    n = n * 2 - 2;
     for (int i = 0; i <= n; i++)
     {
        for (int j = 0; j <= n; j++)
        {
            int Print_number = orginal -  min(min(i,j), min(n - i, n-j));
            cout << Print_number << " ";
        }
        cout << endl;
        
     }
     

    return 0;
}