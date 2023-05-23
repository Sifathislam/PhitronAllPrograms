#include<bits/stdc++.h>
using namespace std;

int main(){

     long long int a,b,c;

     long long int typeOf= a * b;
    
     if((a * b) % 2 != 0){
        cout<< "double" << endl;
     }
     else if(typeOf >= -2147483648 && typeOf <=2147483648)
     {
        cout<< "int"<<endl;
     }
     else{
        cout<< "long long"<< endl;
     }

    //  int bd = INT_MAX;

    //  if(typeOf < bd){
    //     cout << typeOf;
    //  }
     

    return 0;
}