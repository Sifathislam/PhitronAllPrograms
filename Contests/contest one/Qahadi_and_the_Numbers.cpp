#include<bits/stdc++.h>
using namespace std;

int main(){

     int q ; cin >> q; 
     while (q--)
     {
        int n; cin >> n;
        map <int , int > mp;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        int duplicates = 0;
        for(auto && i : mp){
            if(i.second >= 2){
                duplicates+= i.second - 1;
            }
        }
        cout << duplicates << endl;
        
     }
     

    return 0;
}