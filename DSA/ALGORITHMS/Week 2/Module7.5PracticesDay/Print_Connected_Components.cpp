#include<bits/stdc++.h>
using namespace std;
// create the Adjecency Matrix 
const int N = 1e5+3; 
vector<int> graph_List[N];
bool visited[N];

void DFS_Counter(int v){

    visited[v] = true;
    for (auto &&edges : graph_List[v])
    {
        if(visited[edges]) continue;
        DFS_Counter(edges);
    }
    
}



int main(){
    // Take input 
    int n, e; cin >> n >> e;
    
    for (int i = 0; i < e; i++)
    {
        int v1, v2; cin >> v1 >> v2;
        graph_List[v1].push_back(v2);
        graph_List[v2].push_back(v1);
    }
    
    // Count the connect components 
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        DFS_Counter(i);
        counter++;
    }

    cout << counter << endl;
    
    


     

    return 0;
}