#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , q; cin >> n >> q;

    int arry[n];
    for (int i = 0; i < n; i++)
    {
     cin >> arry[i];   
    }
    
    int L = 0;
    int R = n-1;
    bool ans = false;
    while (L <= R)
    {
        int mid_index = (L+R)/2;

        if(arry[mid_index]==q){
            ans = true;
            break;
        }
        if(arry[mid_index] > q)
        {
            R = mid_index - 1;
            }
        else{
            L = mid_index + 1;
        }
    }
    
    if (ans == true)
    {
        cout << "found";
    }
    else{
        cout << "not found";
    }
    
     

    return 0;
}