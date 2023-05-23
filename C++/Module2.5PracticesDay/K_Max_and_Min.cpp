#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Take input 
    int a, b, c;
    cin >> a >> b >> c;
    
    // Make variable for the find the min and max 
    int mx= INT_MIN;
    int mn= INT_MAX;
    
    // Find the min and max by using ternury operator 
    (a <= b && a <= c)? mn = a:(b <= a && b <= c)? mn = b: mn = c;
    (a >= b && a >= c)? mx = a:(b >= a && b >= c)? mx = b: mx = c;
    
    // Print the result 
    cout<< mn <<" ";
    cout<< mx;


    return 0;
}