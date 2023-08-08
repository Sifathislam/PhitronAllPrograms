#include<bits/stdc++.h>
using namespace std;
// Create the List for the count the height  
const int N = 1e5+5;
vector<int> adj_List[N];
bool visited[N];
int  height [N];

// Make the height function create 
void DFS_Count_Height(int u){
    // sec 1 
    visited[u] = true;
    for (auto &&edge : adj_List[u])
    {
        // sec 2
        if(visited[edge]) continue;
        DFS_Count_Height(edge);
        // sec 3 
        height[u] = max(height[u], height[edge] + 1);
    }
    // sec 4 
    
}

int main(){
    
    // Take input 
    int n , m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }
    
    int x; cin >> x;
    // cout the Height 
    DFS_Count_Height(1);
    
    cout << height[x] << endl;

    

        

    return 0;
}