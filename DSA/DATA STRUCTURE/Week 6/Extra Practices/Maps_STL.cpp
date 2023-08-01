#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int > mp;
     int n; cin >> n; 
     while (n--)
     {
        int x; cin >> x;
        if(x == 1){
            string s; cin >> s;
            int val ; cin >> val;
            if(mp.count(s)){
                mp[s] += val; 
            }
            else{
                mp[s] = val;
            }
        }
        else if (x == 3)
        {
            string s; cin >> s;
            cout << mp[s]<< endl;
        }
        else if (x == 2)
        {
            string s; cin >> s;
            mp[s] = 0;
        }
        
        
     }
     

    return 0;
}