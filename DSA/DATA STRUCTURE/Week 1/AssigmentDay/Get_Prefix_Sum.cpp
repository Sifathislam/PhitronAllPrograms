#include<bits/stdc++.h>
using namespace std;

int main(){

     int n; cin >> n;

     vector <int> v(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
     }

    //  Make the arry Prefix 
    vector <long long int> prefix_arr(n);
    prefix_arr[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        prefix_arr[i] = v[i] + prefix_arr[i-1];
    }

    reverse(prefix_arr.begin(),prefix_arr.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << prefix_arr[i] << " ";
    }
    
     

    return 0;
}