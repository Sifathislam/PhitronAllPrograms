#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *arry = new int[5]; // This how to allocate a dynamic array on CPP 
    
    for (int i = 0; i < 5; i++)
    {
        cin >> arry[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
    
    return 0;
}