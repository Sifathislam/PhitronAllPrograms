#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<string> ss;
     string s;
    while (getline(cin, s))
    {
        ss.push_back(s);
    }

    for(auto && v : ss){
        s = v;
        sort(s.begin(),s.end());
        for(auto && c : s){
            if(c != ' '){
                cout << c;
            }
        }
        cout << endl;
    }
    

    return 0;
}