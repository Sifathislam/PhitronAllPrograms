

#include<bits/stdc++.h>
using namespace std;
// Create the Adjacency List 
const int N = 1e3+5; 
vector<int> adj_List[N];
bool visited[N];
int Level[N];

int main(){
    
    // Take input 
    int n , m; cin >> n , m;
    
    for (int i = 0; i < m; i++)
    {
        int u , v; cin >> u >> v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "NODES " << i  << " =) ";
        for (auto &&v : adj_List[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }
    

    // Call BFS Traversal 
    // BFS_Traversal(1);

    
     

    return 0;
}
