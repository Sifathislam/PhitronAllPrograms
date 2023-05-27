#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input 
    int a, b, c;
    char x, q;
    cin >> a >>x >> b>> q >> c;
    
    // Aplay the contditions regerding the qustiona 
    if(x == '+'&& a + b == c){
        cout<< "Yes\n";
    }
    else if (x == '-' && a - b == c)
    {
        cout<< "Yes\n";
    }
    else if (x == '*'&& a * b == c)
    {
        cout<< "Yes\n"; 
    }
    else{
        if(x == '+')
        {
            cout << a+b;
        }
        else if(x== '-')
        {
            cout<< a-b;
        }
        else if (x == '*')
        {
            cout<< a*b;
        }
    }
    
    
     

    return 0;
}