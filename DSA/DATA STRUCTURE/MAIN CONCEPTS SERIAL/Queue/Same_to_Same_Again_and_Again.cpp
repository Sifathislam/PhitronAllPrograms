#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Createing the Stack and Queue 
    stack <int> st;
    queue <int> q;
    //  Take inputs n and m
    int n, m; cin >>n >>m;
    
    // Take stack values 
    while (n--)
    {
        int x; cin >> x;
        st.push(x);
    }

    // Take queue values
    while (m--)
    {
        int x; cin >> x;
        q.push(x);
    }

    // Create the temp queue to check stack same or not 
    queue <int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    
    // Now check the result 
    if (q == temp)
    {
        cout <<"YES";
    }
    else{
        cout << "NO";
    }


    return 0;
}