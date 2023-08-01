#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input of n and n size arry A 
     int n; cin >> n;
     vector <int> v1(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v1[i];
     }

    // Take input of m and n size arry B 
     int m; cin >> m;

     vector <int> v2(m);
     for(int i = 0; i < m; i++){
        cin >> v2[i];
     }

    // Take input of insert index; 
     int insert_index; cin >> insert_index;
        
    while(m--)    
    {
     v1.insert(v1.begin()+insert_index,v2[m]);   
    }
    // Print the result 
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    
     

    return 0;
}