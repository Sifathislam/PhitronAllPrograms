#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cin >> n;
     int arr[n];

     for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

    //  Sorting Arry in accsending order with in-build function

    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }

    // Sorting arry IN desending Order with in-build functin 
    cout << endl;
    cout << endl;
    cout << endl;

    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
    
     

    return 0;
}