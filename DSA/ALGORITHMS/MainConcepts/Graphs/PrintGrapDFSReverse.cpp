#include<bits/stdc++.h>
using namespace std;
// Create and Adjacency List
const int N = 1e5+7;
vector<int> graph_List[N];
bool visited[N];

// Create the dfs 
void reverse_Print_DFS(int vertex){
    // section 1: After enter the dfs 
    visited[vertex] = true;
    for (auto &&edge : graph_List[vertex])
    {
        // section 2: before the dfs recall
        if(visited[edge]) continue;
        reverse_Print_DFS(edge);
        // section 3: After all dfs call  
        // cout <<  edge << " ";
    }
    // section 4: visited all the vertex  
    cout << vertex << " ";
     
}


int main(){
    
    int n, e; cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int first_vertex, secend_Vertex; cin >> first_vertex >> secend_Vertex;
        graph_List[first_vertex].push_back(secend_Vertex);
        graph_List[secend_Vertex].push_back(first_vertex);
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "List : " << i << " " ;
    //     for (auto &&edge : graph_List[i])
    //     {
    //         cout << edge << " ";
    //     }
    //     cout << endl;
    // }

    // create the reverse way Print DFS
    
    reverse_Print_DFS(1);
    // cout << 1;
    
     

    return 0;
}