#include<bits/stdc++.h>
using namespace std;
// Create an Global Graph for the work 
const int N = 1e5+7;
vector<int> graph[N];
bool visited[N];

void DFS_Travesal(int u){
    // Section 1 : After enter the Node U Clarify that U Node is Visitied
    visited[u] = true;
    cout << "Visited : " << u <<endl; 
    for(auto && v : graph[u]){
        // Section 2 : Before enter the neighbor of U 
        if(visited[v]) continue; //if visited continue

        DFS_Travesal(v); //Otherwise visit
        // Section 3 : After visit a neighbor 
    }
    // Section 4 : After visit the U 
}


int main(){
    // Take input 
    int n, e; cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout <<"List NO: " << i << " Edges are : ";
    //     for (auto && edges : graph[i])
    //     {
    //         cout << edges << " ";
    //     }
    //     cout << endl;
    // }
    
    // RUN The dfs Traversal 
    DFS_Travesal(1);
     

    return 0;
}