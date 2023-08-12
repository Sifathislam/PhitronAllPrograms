#include<bits/stdc++.h>
using namespace std;
// Create the Ajecency List 
const int N = 1e5+5; 
vector<int> graph_list[N];
bool visited[N];

// Create the DFS 
bool isCycle(int v, int p){
    bool isCyleExits = false;
    visited[v] = true;
    for (auto && edges : graph_list[v])
    {
        if(edges == p) continue;
        if(visited[edges]) return true;
        isCyleExits |= isCycle(edges, v);
    }

    return isCyleExits;
    
}

int main(){
    
    int n, m;
    cin >> n >>m;

    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        graph_list[u].push_back(v);
        graph_list[v].push_back(u);
    }

    // Call bfs to find the  cyle 
    if(isCycle(1,-1)){

        cout << "YES" <<endl; 
    }
    else{
        cout << "NO" << endl;
    }
    
     

    return 0;
}