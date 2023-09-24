#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string a , b; ; 
    while (cin >> a >> b)
    {
        int n = a.size();
        int m = b.size();
        int x = 0;
        bool flag = false;
        // Normal Aproach 
        for (auto &&i : a)
        {
            if(i == b[x]){
                x++;
            }

            if(x == b.size()){
                flag = true;
                break;
            }
            
        }

        if(flag) cout << "Possible" <<endl;
        else cout  << "Impossible" << endl;
    }
    
    

    return 0;
}