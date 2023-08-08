#include<bits/stdc++.h>
using namespace std;
// Create the list to find the depth 
const int N = 1e5+7;
vector<int> Adj_List[N];
bool visited[N];
int depth[N];

void DFS_Count_Depth(int v){
    // sec : 1 
    visited[v] = true;
    for (auto &&edge : Adj_List[v])
    {
        // sec : 2 
        if(visited[edge]) continue;
        depth[edge] = depth[v] + 1;
        DFS_Count_Depth(edge);
        // sec : 3
    }
        // sec : 4
}

int main(){
    // Take input the  Graph 
    int n , m; cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        Adj_List[u].push_back(v); 
        Adj_List[v].push_back(u); 
    }
    int x; cin >> x;

    // count the graph
    DFS_Count_Depth(1);
    
    cout << depth[x]<< endl;

    
     

    return 0;
}