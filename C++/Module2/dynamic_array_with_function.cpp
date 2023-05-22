#include<bits/stdc++.h>
using namespace std;

int * func(){ // retun the address of the arry
    int * arr = new int[5]; // dynamic arry 
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    return arr;
}


int main()
{
    int *arr = func(); // recevid the arry 
   
   for (int i = 0; i < 5; i++)// print the arrry
   {
    cout<< arr[i]<< " ";
   }
   

    return 0;
}