#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Declar the stl set 
    set <int> s;
    int n; cin >> n;
    cout << n << endl; 
    while (n--)
    {
        int val; cin >> val;
        s.insert(val); 
    }
    
    // ouput 
    for (auto it = s.begin();it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    if(s.count(21)){
        cout << "Yes"; 
    }
    else cout<< "NO";
    
    

    return 0;
}