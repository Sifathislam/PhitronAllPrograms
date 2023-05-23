#include<bits/stdc++.h>
using namespace std;


int * get_array (int n){
    // create a dynamic arry with n number recived from main 
    int * arr = new int[n];

    // Take input the arry 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // return the arry 
    return arr;
}

int main()
{
    // Take input n size of arry 
     int n;
     cin >> n;
    //  Pass n in the get arr function 
     int * get_arr = get_array(n);
    // function return the arry and print it by loop 
    for (int i = 0; i < n; i++)
    {
        cout<< get_arr[i]<< " ";
    }
    




    return 0;
}