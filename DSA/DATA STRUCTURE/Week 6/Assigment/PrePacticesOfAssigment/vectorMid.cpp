#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Declar vector 
    vector <int> v;

    int n; cin >> n;
    while (n--)
    {
        int x;  cin >> x;
        v.push_back(x);
    }

    // find the mid 
    int mid = (0 +(v.size() - 1) ) /2;

    cout << v[mid];
    

    return 0;
}