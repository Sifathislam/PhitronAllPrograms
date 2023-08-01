#include<bits/stdc++.h>
using namespace std;

int main(){

     map<string, int>mp;

    //  Normal insert and output 
    // mp.insert({"Sifat", 75});
    // mp.insert({"Shaik", 50});
    // mp.insert({"Siam", 95});

    // cout << mp["Sifat"]<< " "; 
    // cout << mp["Shaik"]<< " "; 
    // cout << mp["Siam"]<< " "; 

    // Easy way to input and output

    int n; cin >> n;
    while (n--)
    {
        string Name; cin >> Name;
        int num; cin >> num;
        mp[Name] = num;
    }

    // Ouput 
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it-> second << endl;
    }
    


    return 0;
}