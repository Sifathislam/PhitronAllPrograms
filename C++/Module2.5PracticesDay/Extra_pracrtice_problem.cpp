#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Take input N ;
     int n;
     cin >> n;
    
    // Make dynamic arry and take input the first arry size of n;
     int * arr_A = new int[n];
     for (int i = 0; i < n; i++)
     {
        cin >> arr_A[i];
     }
    // Take input m 
     int m;
     cin >> m;
    // Make dynamic arry and copy a vaules 
     int * arr_B = new int[m];
     for (int i = 0; i < n; i++)
     {
        arr_B[i] = arr_A[i]; 
     }
    //  Delete the arr_a array 
     delete[] arr_A;
    // Take input new values after copy arrr_a 
     for (int i = n; i < m; i++)
     {
        cin >> arr_B[i];
     }
    // Print the fina result 
     for (int i = 0; i < m; i++)
     {
        cout << arr_B[i]<< " ";
     }
     
     





    return 0;
}