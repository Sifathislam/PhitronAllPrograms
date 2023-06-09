#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input n
     int n; cin >>n;

     for (int i = 0; i < n; i++)
    {
        // Print the X in middle 
        if (i == (n/2))
        {
            for (int k = 0; k < n; k++)
            {
                if(k == (n/2)){
                    cout << 'X';
                    continue;
                }
                cout <<" ";
            }
            cout << endl;
            continue;
        }
    //  print the back and froward slassh 
     for (int j = 0; j < n; j++)
     {
        if(i + j == n - 1){
            cout << "/";
            continue;
        }
        if (i == j)
        {
            cout << "\\";
            continue;
        }
        cout << " ";
        
     }
     cout << endl;
     
        
     }

    return 0;
}