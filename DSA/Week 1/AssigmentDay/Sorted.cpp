#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Input the test case 
    int test_Case; cin >> test_Case;

    // Start test case 
    for (int t = 0; t < test_Case; t++)
    {
        // find the arry is sort or not 
        int n; cin>>n;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;
        int Maxim_val_ar = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i]>= Maxim_val_ar)
            {
                Maxim_val_ar = arr[i];
            }
            else{
                flag = false;
                break;
            }

        }
        
        // Print the final resutl 
        if (flag == true) cout << "YES"<< endl;
        else cout << "NO"<< endl;
        
        
    }
    

    return 0;
}