#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test_case; cin>>test_case;
    
    while (test_case--){
        string s; cin>>s;
        int n =0;
        bool flag = false;
        for(auto && i:s){
            if(i == '1'){
                n++;
            }
            else{
                flag = true;
            }

        }
        if(n==0) cout << 0 << endl;
        else if (flag == false) cout << n << endl;
        else if (n % 2 == 0) cout << n/2 << endl;
        else if (n % 2 != 0) cout << (n/2)+1 << endl;
    }

    return 0;
}
