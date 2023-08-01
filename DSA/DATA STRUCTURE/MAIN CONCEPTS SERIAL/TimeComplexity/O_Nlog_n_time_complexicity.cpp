#include<bits/stdc++.h>
using namespace std;

int main(){

    //  This  time complexity O(nlong(n)) This can do 10^5 oparatins 
     int n;
     cin >> n;

     for (int i = 1; i <= n; i++)
     {
        for (int j = 1; j <= n; j *= 2) /// this O(nlong(n))
        {
            cout << j << " ";
        }
        cout << endl;
     }
     

    return 0;
}