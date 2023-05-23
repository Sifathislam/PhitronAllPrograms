#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Take input  
     float n,m;
     cin >>n >>m; 
    //  Print the result 
    cout<< "floor "<< n << " / "<< m << " = "<< floor(n/m)<< endl;
    cout<< "ceil "<< n << " / "<< m << " = "<< ceil(n/m)<< endl;
    cout<< "round "<< n << " / "<< m << " = "<< round(n/m)<< endl;

    return 0;
}