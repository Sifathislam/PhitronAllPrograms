#include<bits/stdc++.h>
using namespace std;

int main(){

     int n ; cin >> n;
     if(n == 1) cout << 1 << endl;
     else if(n == 2) cout << 2 << endl;
     else{
        long long int parent = 1;
        long long int child = 2;
        for (int i = 3; i <= n; i++)
        {
          parent*=2;
          child*=2;
        }
      cout << parent * child;
     }

    return 0;
}