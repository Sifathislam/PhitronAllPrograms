#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Take input 
   int n;
   cin>> n;
    
    // Make minimum variable for the find the max 
    int mx = INT_MIN;

    // Use loop the find the max 
   for (int i = 0; i < n; i++)
   {
    int n_num;
    cin >> n_num;

    mx = max(n_num, mx);
   }
   
    // pritn the result 
    cout<< mx;




    return 0;
}