#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
     int n; cin >> n;

     while (n--)
     {
        int x; cin >>  x;
        if(x == 1){
            int val ; cin >> val;
            s.insert(val);
        }
        else if (x == 2)
        {
            int val; cin >> val;
            s.erase(val);
        }
        else{
        int val ;cin >> val;
        if(s.count(val)) cout << "Yes" << endl;
        else cout << "No"<< endl ; 
        }
        
     }
     

    return 0;
}