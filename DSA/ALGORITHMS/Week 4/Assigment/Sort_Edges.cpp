#include<bits/stdc++.h>
using namespace std;

int main(){
    // Make priority_queue 
    priority_queue< pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>> >pq; 

    // Take input 
     int n; cin >> n;
     while (n--)
     {
        int a, b;
        cin >> a >> b;

        pq.push({a, b}); 
     }
    
    // Print the result_of_t 
    while (!pq.empty())
    {
        cout << pq.top().first <<  " "  << pq.top().second << endl;
        pq.pop();
    }
    


     

    return 0;
}