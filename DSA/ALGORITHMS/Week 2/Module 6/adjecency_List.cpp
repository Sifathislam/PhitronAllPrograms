#include<bits/stdc++.h>
using namespace std;
// Create and global List for graph input 
const int N  = 1e5+7;
vector<int> graph[N];
int main(){
    
    // Take input 
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;

        graph[u].push_back(v); 
        graph[v].push_back(u); //this line only for the undirected list

    }


    // print the list 
    for (int i = 1; i <= n; i++)
    {
        for(int val : graph[i]){
            cout << val << " ";
        }
        cout << endl;
    }
    

    
     

    return 0;
}