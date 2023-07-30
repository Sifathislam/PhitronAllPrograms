#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input and make string for the opararation 

    string ss, s, finalResult;
    cin >> ss;
    int n = 0;
    // start the loop 
    for(auto && c : ss)
    {
        // cout << c;
        if(isdigit(c)){
            n = 0;
            n = c - '0';
        }
        else if(isalpha(c))
        {
            s+= c;
        }
        else{
            while (n--)
            {
                finalResult+= s;
            }
            // cout << s;
            s.clear();
            finalResult += c;
            n = 0;
        }
        
     }
     while (n--)
     {
        finalResult += s;
     }
     
     cout <<finalResult << endl;
     

    return 0;
}