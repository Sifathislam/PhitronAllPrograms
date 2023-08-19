#include<bits/stdc++.h>
using namespace std;
// create vairables 
const int N = 1e5+5;
const int INF = 1e9+5;
typedef pair<int, int> Pii;
vector<Pii> graph[N];
vector<pair<Pii,int>> edges_graph;
int dis[N];
int n, m;

void Bellman_Ford(int source){

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }

    dis[source] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (auto &&vpair : graph[u])
            {
                int vertex = vpair.first;
                int weight = vpair.second;

                if(dis[u] != INF && dis[vertex] > dis[u] + weight){
                    
                    dis[vertex] = dis[u] + weight; 
                }

            }
            
        }
        
    }
    
    
}

int main(){
    
    cin >> n >> m;
    
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
    }

    Bellman_Ford(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance " << i ;
        cout << " : " << dis[i] << endl;
    }
    
    

     

    return 0;
}