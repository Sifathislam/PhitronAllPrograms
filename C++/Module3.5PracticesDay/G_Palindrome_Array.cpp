#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input 
     int n;
     cin >> n;
     int arry[n];

     for (int i = 0; i < n; i++)
     {
        cin >> arry[i];
     }
     
    //  Make the two pointer method and find the palindrome 
     int j = n - 1;
     int flag = 1;
     for (int i = 0; i < n; i++)
     {
        if (arry[i] != arry[j])
        {
            flag = 0;
            break;
        }
        j--;
     }
     


    if(flag == 1){
        cout<< "YES";
    }
    else{
        cout << "NO";
    }


    return 0;
}