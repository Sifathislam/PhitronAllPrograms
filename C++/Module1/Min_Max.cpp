#include<iostream>
#include <algorithm>   // for the min max
using namespace std;

int main(){
    // Using in-build   function for found the min and max value 

    int a, b;
    cin >> a >> b;

    int mn = min(a, b); // found the minimum
    int mx = max(a, b); // found the maximum

    cout << mn << " " << mx << endl;




    return 0;
}