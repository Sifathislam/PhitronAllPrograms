#include<bits/stdc++.h>
using namespace std;
// Create the Adj List 
const int N = 1e5+5;
vector<int> graph_List[N];
bool visited[N];

// Create the dfs 
void DFS(int v){

    visited[v] = true;
    for (auto &&edges : graph_List[v])
    {
        if(visited[edges]) continue;
        DFS(edges);
    }
    
}
void DFS_Print(int v){

    visited[v] = true;
    cout << v << " ";
    for (auto &&edges : graph_List[v])
    {
        if(visited[edges]) continue;
        DFS(edges);
    }
    
}

int main(){

    // Take input 
    int n, m; cin>> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        graph_List[u].push_back(v);
        graph_List[v].push_back(u);
    }
    
    // count the components 
    int counter = 0;
    vector<int>componenets;
    for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        DFS(i);
        componenets[i] = i;
        counter++;
    }
    cout << counter << endl;
    
    // print the component 
    memset(visited,0,sizeof(visited));
     for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        cout << "Component " << i << " : ";
        DFS_Print(i);
    }
    
    

     

    return 0;
}