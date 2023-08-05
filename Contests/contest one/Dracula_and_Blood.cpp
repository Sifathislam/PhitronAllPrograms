#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Take test case input 
    int test_case; cin>>test_case;
    
    while (test_case--){
        // Take input of string 
        string s; cin>>s;
        int n =0;

        // count numbers 
        vector<int> numbers;
        for(auto && val : s){
            if(val == '1'){
                n++;
            }
            else{
                numbers.push_back(n);
                n = 0;
            }
        }

        numbers.push_back(n);
        
        // sort it decending
        sort(numbers.begin(), numbers.end(), greater<int>());
        
        // make the result and print 
        
        int result = 0;
        for (int i = 0; i < numbers.size(); i+=2)
        {
            result +=numbers[i];
        }
        
        cout << result <<endl;

    }
    

    return 0;
}
