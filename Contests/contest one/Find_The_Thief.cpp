#include<bits/stdc++.h>
using namespace std;

int main(){

    //  input of qurry 
    int q; cin>> q; 
    while (q--)
    {
        int n; cin >> n;
        map<int, int>mp; 
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        
       for(auto && i : mp){
        if(i.second % 2 != 0){
            cout << i.first << endl;
        }
       }
        
    }
    

    return 0;
}