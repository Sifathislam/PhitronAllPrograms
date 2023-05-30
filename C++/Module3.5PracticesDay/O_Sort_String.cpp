#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
        int feq_arr[26] = {0};
   for (int i = 0; i < n; i++)
   {
        char s;
        cin>>s;

        int val = s - 97;
        feq_arr[val]++;
        
   }
        
        for (int i = 0; i < 26; i++)
        {
            int j = 0;
            if(feq_arr[i] !=0){
            while (j < feq_arr[i])
            {
                char a = i + 97;
                cout << a ;
                feq_arr[i]--;
            }
            }
        }
   
    return 0;
}