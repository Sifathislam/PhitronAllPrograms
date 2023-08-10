#include<bits/stdc++.h>
using namespace std;
// Create the Graph List 
const int N = 1e3+9;
vector<int> graph_List[N];
bool visited[N];

// Create BFS
void BFS_Traversal(int Main_vertex){
    // Create the queue 
    queue<int>q;
    q.push(Main_vertex);
    visited[Main_vertex] = true;
    while (!q.empty())
    {
        // First remove and store 
        int temp_vertex = q.front();
        q.pop(); 
        // push the childs 
        for (auto &&edges : graph_List[temp_vertex])
        {
            if(visited[edges]) continue;
            q.push(edges);
            visited[edges] = true;
        }
        
    }
    

}

// Create DFS 
void DFS_Traversal(int vertex){
    // section : 1
    visited[vertex] = true;
    for (auto &&edges : graph_List[vertex])
    {
        // section : 2
        if(visited[edges]) continue;
        DFS_Traversal(edges);
        // section : 3 
    }
    // section : 4 
    
}


int main(){

    // Take input 
    int vertices, edges;
    cin >> vertices >> edges;
    for (int i = 0; i < vertices; i++)
    {
        int vertex_One, vertex_Two; 
        cin >> vertex_One >> vertex_Two;
        graph_List[vertex_One].push_back(vertex_Two);
        graph_List[vertex_Two].push_back(vertex_One);
    }
    
    int count_Component = 0;
    for (int i = 1; i <= vertices; i++)
    {
            if(visited[i]) continue;
            DFS_Traversal(i);
            // BFS_Traversal(i);
            count_Component++;
            cout << i << " " <<  count_Component << endl;
        
    }
    
    cout << "Connected component are : " << count_Component;
     

    return 0;
}