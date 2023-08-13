#include<bits/stdc++.h>
using namespace std;
// Create a pair variable for easy work 
typedef pair<int, int> Pii; 
// Creating the Adjecency List with pair and more imp variables 
const int N = 1e5 + 5; 
const int INF = 1e9 + 5; 

vector<Pii> graph_List[N];
bool visited[N];
vector<int> dist(N, INF);

void Dijkstra(int source){
    // Create priority_queue  in min heap 
    priority_queue<Pii , vector<Pii>,greater<Pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        // store and pop 
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for (Pii Vpair : graph_List[u])
        {
            int v = Vpair.first;
            int w = Vpair.second;

            if(visited[v]) continue;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }   
    }
}


int main(){
    // Take inputs 
    int n, e; cin >> n >> e;

    for (int i = 0; i < e; i++){
        int ver_one, ver_two, weight; 
        cin >> ver_one >> ver_two >> weight;
        graph_List[ver_one].push_back({ver_two,weight});
        graph_List[ver_two].push_back({ver_one,weight});
    }
    
    // for (int i = 1; i <=n ; i++)
    // {
    //     cout<< "NODE : " << i << " =) "; 
    //     for (auto &&edges : graph_List[i])
    //     {
    //         cout << " EDGES : " << edges.first << " WEIGHT : " << edges.second; 
    //     }
    //     cout << endl;
    // }

    // Calling Dijsktra Algorithm 
    Dijkstra(1);

     for (int i = 1; i <= n; i++)
     {
        cout << "Distance of nodes " << i << " " << "=> " << dist[i] << endl;
     }
     

    
     

    return 0;
}