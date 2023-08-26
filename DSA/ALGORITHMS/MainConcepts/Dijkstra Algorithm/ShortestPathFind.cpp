#include<bits/stdc++.h>
using namespace std;
// Create the Adjacency List 
const int N = 1e5+5;
vector<int> graph_List[N];
bool visited[N];
int level[N];
int parent[N];

void BFS(int s){
    // create the queue 
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;
    while (!q.empty())
    {
        int pr = q.front();
        q.pop();
        for (auto &&v : graph_List[pr])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[pr] +  1;
            parent[v] = pr;
        }
        
    }
    
}
int main(){
    // Take input '
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        graph_List[u].push_back(v);
        graph_List[v].push_back(u);
    }
    int s,d; cin >> s >>d;
    
    // call the bfs funciotn 
    BFS(s);
    
    cout << "The distance : " << level[d]<< endl;
    // Print the parents 
    for (int i = 1; i <= n; i++)
    {
        cout << "Parent " << i << " : " <<  parent[i] << endl;
    }

    // find the path 
    vector<int> path;
    int current = d;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    
    reverse(path.begin(),path.end());
    // Prient the path 
    for (auto &&i : path)
    {
        cout << i << " ";
    }
    
    


    


    
     

    return 0;
}