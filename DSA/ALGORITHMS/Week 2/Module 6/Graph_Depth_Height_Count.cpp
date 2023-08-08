#include<bits/stdc++.h>
using namespace std;
// Create Global Variables for the work 
const int N = 1e5+5;
vector<int> graph[N];
bool Visited[N];
int Depth[N];
int Height[N];

void DFS_Depth_Height_Count(int u){
    
    // Section 1 : That clarify that the vertex is visited
    Visited[u] = true;
    for (auto && v : graph[u])
    {
        // Section 2 : check is the vertex Visited or not 
        if(Visited[v]) continue;
        Depth[v] = Depth[u] + 1;
        DFS_Depth_Height_Count(v);
        // Section 3 After work of the neighbor 
        Height[u] = max(Height[u],Height[v] + 1);
    }
    // Section 4 After work of the u 
    
}


int main(){

        int n,e; cin >> n >> e;

        for (int i = 0; i < e; i++)
        {
            int vertex_one, vertex_two; cin >> vertex_one >> vertex_two;
            graph[vertex_one].push_back(vertex_two);
            graph[vertex_two].push_back(vertex_one);
        }


        // for (int i = 1; i <= n; i++)
        // {
        //     cout << "vertices edges" << ": " ; 
        //     for (auto &&edges : graph[i])
        //     {
        //         cout << edges << " ";
        //     }
        //     cout << endl;
        // }
        DFS_Depth_Height_Count(1);
        for (int i = 1; i <= n; i++)
        {
            cout << "Depth of " << i << " " << Depth[i] << endl;
        }
        cout << "*-----------------------------------------------------*" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "Height of " << i <<" "<< Height[i] << endl;
        }
        
        
        

    return 0;
}