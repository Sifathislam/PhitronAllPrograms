#include<bits/stdc++.h>
using namespace std;
// Create the graph list and other variablas 
const int N = 1e5+10;
vector<int> graph_List[N];
vector<bool> visited(N, false);
vector<int> Level(N, 1);
vector<int> parent(N, -1);

void BFS(int source){
    // create the queue
    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto &&v : graph_List[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            Level[v] = Level[u] + 1;
        }
        
    }
    
}

int main(){
    // Taake input
    int n, e; cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int ver1, ver2; cin >> ver1 >> ver2;
        graph_List[ver1].push_back(ver2);
        graph_List[ver2].push_back(ver1);
    }
        
    // Calling bfs for find the shortest routed  
    BFS(1);
    
    // print the result 
    if(Level[n] == 1) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    cout << Level[n] << endl;
    
    int current = n;
    vector<int> path;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    
    reverse(path.begin(), path.end());
    for (auto &&i : path)
    {
        cout << i << " ";
    }
    
    
     

    return 0;
}