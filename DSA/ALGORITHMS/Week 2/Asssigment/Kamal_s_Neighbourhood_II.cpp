#include<bits/stdc++.h>
using namespace std;
// Create Adjacency List 
const int N = 1e5+3;
vector<int> graph_List[N];
bool visited[N];
int cnt = 0;
int Level[N];
// Create the bfs 
void BFS_Level_Count(int v){
    // create the queue
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        // first sotre and rmove 
        int tmp_v = q.front();
        q.pop();
        for (auto &&edges : graph_List[tmp_v])
        {
            if(visited[edges])continue;
            cnt++;
            q.push(edges);
            visited[edges] = true;
            Level[edges] = Level[tmp_v] + 1;
        }
        
    }
    

}

int main(){
    
    // Take input 
    int n, m; cin >>n >>m;
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        graph_List[u].push_back(v);
    }
    int k; cin >> k;
    BFS_Level_Count(k);
    cout << cnt << endl;
    
    
     

    return 0;
}