#include<bits/stdc++.h>
using namespace std;

int main(){

     long long int a, b, c, d;
     cin >> a >> b >> c >> d;

     if(a == c && b == d){
        cout << "NO"<< endl;
     }
     else if(a >= c && b >= d){
        cout<< "YES"<< endl;
     }
     else{
        cout << "NO"<< endl;
     }
     

    return 0;
}