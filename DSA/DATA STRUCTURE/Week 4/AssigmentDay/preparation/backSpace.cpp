#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Take input 
    string s; cin >> s;
    string t; cin >> t;

// Do the oparation 
        stack <char> st1, st2;
        for(char c : s){
            if(c == '#'){
                if(!st1.empty()) st1.pop();
            }
            else{
                st1.push(c);
            }
        }
        for(char c : t){
            if(c == '#'){
                if(!st2.empty()) st2.pop();
            }
            else{
                st2.push(c);
            }
        }

        if(st1 == st2) cout <<"Yes";
        else cout<< "No";

    return 0;
}