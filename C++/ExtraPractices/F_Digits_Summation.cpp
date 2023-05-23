#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input 
     long long int n, m;
     cin >> n >> m;
    // Find the last digit 
     n = (n % 10);
     m = (m % 10);
    // Print the sum of last digit 
     cout << n + m;


    return 0;
}