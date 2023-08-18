#include<bits/stdc++.h>
using namespace std;
// Create the Adjacency List 
typedef pair<int, int> Pii;
const int N = 1e5 + 1;
int n, e;
const int inf = 1e9 + 1;
vector<Pii> Graph_List[N];
bool visited[N];
vector<int> dist(N, inf);
vector<int> parent(N, -1);

void Djks_al(int s){
    priority_queue<Pii, vector<Pii>, greater<Pii>> pq;
    dist[s] = 0;
    pq.push({dist[s], s});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for (auto &&child : Graph_List[u])
        {
            int v  = child.second;
            int w = child.first;

            if(visited[v]) continue;
            if(dist[u] + w  < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                parent[v] = u;
            }
        }
        
    }
    
}



int main(){
        
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int v1, v2 , w; cin >> v1 >> v2 >> w;
        Graph_List[v1].push_back({w, v2});
    }
    int s, d; cin >> s >> d;

    Djks_al(s);

    cout << dist[d] << endl;

    vector<int> path;

    int current = d;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    
    reverse(path.begin(), path.end());
    
    cout << "Path" ;
    for (auto &&i : path)
    {
        cout << " ->  " << i << " ";
    }
    
    


    return 0;
}