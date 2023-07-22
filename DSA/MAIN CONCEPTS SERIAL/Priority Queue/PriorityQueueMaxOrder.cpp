#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create the priority_queue
    priority_queue<int> pq;

    while (true)
    {
        // take input of the run function
        int n; cin >> n;

        if(n == 0){ // insert 
            int x; cin >> x;
            pq.push(x);
        }
        else if (n == 1) // delete
        {
            pq.pop();
        }
        else if (n == 2)
        {
            cout << pq.top() << endl;
        }
        
        else{
            break;
        }
        
    }
    


    return 0;
}