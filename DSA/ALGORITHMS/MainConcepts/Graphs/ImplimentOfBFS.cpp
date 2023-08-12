#include<bits/stdc++.h>
using namespace std;
// Create the Adjacency List 
const int N = 1e2; 
vector<int> adj_List[N];
bool visited[N];
int Level[N];

void BFS_Traversal(int u){
    // create queue for bfs 
    queue<int> q;
    q.push(u);
    visited[u] = true;
    Level[u] = 0;

    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        cout << "Visited Node "<<val << endl; 
        // sec : 1  before visited 
        for (auto &&i : adj_List[val])
        {
        // sec : 2 before opration 
            if(visited[i]) continue;
            q.push(i);
            visited[i] = true;
            Level[i] = Level[val] + 1;
        // sec : 3 after opration 
        }
         
    }
        // sec : 4 after visted U 
    
}

int main(){

    int martrix[N][N];
    // Take input 
    int n , m; cin >> n >> m;
    
    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }

    // Call BFS Traversal 
    BFS_Traversal(1);
    cout << "**********************************************" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Levels : " << i << " : " <<Level[i] << endl;
    }
    


    
     

    return 0;
}