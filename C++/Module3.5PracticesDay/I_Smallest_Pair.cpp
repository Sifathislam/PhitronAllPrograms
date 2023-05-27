#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input of test case 
     int test_case;
     cin>> test_case;

     for (int t = 0; t < test_case; t++)
     {
        // Take input of arrry 
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Find the smallest pair 
        long long int small_pair = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int math_pair= arr[i] + arr[j] + (j - i);
                if(math_pair < small_pair){
                    small_pair = math_pair;
                }
            }
            
        }
        // Print the result 
        cout << small_pair<< endl;
     }
     

    return 0;
}