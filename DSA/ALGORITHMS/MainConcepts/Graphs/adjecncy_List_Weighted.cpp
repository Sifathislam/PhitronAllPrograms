#include<bits/stdc++.h>
using namespace std;
// Create and global List for graph input 
const int N  = 1e5+7;
vector<pair<int,int>> graph[N];
int main(){
    
    // Take input 
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w; cin >> u >> v >> w;

        graph[u].push_back({v,w}); 
        graph[v].push_back({u,w}); //this line only for the undirected list

    }


    // print the list 
    for (int i = 1; i <= n; i++)
    {
        cout << "List NO: " << i << " " << " : ";
        for(auto && val : graph[i]){
            cout <<"(" << val.first << ", " << val.second << ")";
        }
        cout << endl;
    }
    

    
     

    return 0;
}