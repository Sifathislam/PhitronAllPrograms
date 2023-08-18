#include<bits/stdc++.h>
using namespace std;
// Create variables and Adjaycency list
typedef pair<int, int> Pii;

const int N = 1e5 + 5;
const long long int INF = 1e18 + 1;
int Nodes, Edges; 
vector<Pii>Graph_List[N];
bool Visited[N];
vector<long long int> dist(N,INF);
vector<int> parent(N, -1);
void Dijkstra_Algo(int source){
    // Create an Prioriy queue based on the min 
    priority_queue<Pii, vector<Pii>, greater<Pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});
    Visited[source] = true;
    while (!pq.empty())
    {
        int parent_node = pq.top().second;
        pq.pop();
        Visited[parent_node] = true;
        for (Pii Children_Node : Graph_List[parent_node])
        {
            int vertex = Children_Node.second;
            int weight = Children_Node.first;

            if(Visited[vertex]) continue;
            if(dist[parent_node] + weight < dist[vertex]){
                dist[vertex] = dist[parent_node] + weight;
                pq.push({dist[vertex],vertex});
                parent[vertex] = parent_node;
            }
        }   
    }
}

int main(){

     cin >> Nodes >> Edges;

    for (int i = 0; i < Edges; i++)
    {
        int vertex_One, vertex_Two, weight; 
        cin >> vertex_One >> vertex_Two >> weight;
        Graph_List[vertex_One].push_back({weight,vertex_Two});
        Graph_List[vertex_Two].push_back({weight, vertex_One});
    }

    int source, destination; cin >> source >> destination;

    Dijkstra_Algo(source);

    vector<int> path;
   int current = destination;
   while (current != -1)
   {
        path.push_back(current);
        current = parent[current];
   }

   reverse(path.begin(), path.end());
    
    cout<< dist[destination] << endl;
    cout << "Path ";
   for (auto &&i : path)
   {
     cout << "-> " << i << " ";
   }
   
   


     

    return 0;
}