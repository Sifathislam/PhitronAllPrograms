#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Take input test case
     int testCase;
     cin >> testCase;
     for (int t = 0; t < testCase; t++)
     {
        // Take input of string 
        string x;
        cin >> x;
        string s;
        cin >> s;

        // Make the change 
        while (x.find(s) != -1)
        {
            x.replace(x.find(s),s.size(),"$");
        }
        // Print the output 
        cout << x << endl;
     }
     



    return 0;
}