#include<bits/stdc++.h>
using namespace std;

int main(){

     int a, b;
     char c;
     cin >> a >> c >> b;
     
     if(c == '<'){
        // if (a < b)
        // {
        //     cout << "Right";
        // }
        // else{
        //     cout << "Wrong";
        // }

        // Using Ternury 
        (a < b)? cout << "Right": cout << "Wrong";

     }
     else if (c == '>')
     {
    //     if (a > b){
    //         cout<< "Right";
    //     }
    //     else{
    //         cout << "Wrong";
    //     }
        // Using Ternury 
        (a > b)? cout << "Right": cout << "Wrong";
     }
     else{
        // if (a == b){

        // cout<< "Right";

        // }
        // else{
        //     cout<<"Wrong";
        // }
        
        // Using Ternury 
        (a = b)? cout << "Right": cout << "Wrong";
     }
     

    return 0;
}