#include<bits/stdc++.h>
using namespace std;
// Create Adjacency List 
const int N = 1e5+3;
vector<int> graph_List[N];
bool visited[N];

int main(){
    
    // Take input 
    int n, m; cin >>n >>m;
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        graph_List[u].push_back(v);
        graph_List[v].push_back(u);
    }
    int k; cin >> k;
    cout << graph_List[k].size() << endl;
    
     

    return 0;
}