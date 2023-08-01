#include<bits/stdc++.h>
using namespace std;

int main(){

     queue <int> myQueue;

    //  Take input 
    int n; cin >> n;

    while (n--)
    {
        int x; cin >> x; 
        myQueue.push(x);
    }

    // Pritn the result 
    while (!myQueue.empty())
    {
        cout << "The Queue val " << myQueue.front() << endl;
        myQueue.pop();
    }
    
    
     

    return 0;
}