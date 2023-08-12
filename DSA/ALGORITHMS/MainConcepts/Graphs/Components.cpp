#include<bits/stdc++.h>
using namespace std;
// Create the Adj List 
const int N = 1e5+5;
vector<int> graph_List[N];
bool visited[N];
int counter = 1;


// Create the dfs 
void DFS(int v){

    visited[v] = true;
    counter++;
    for (auto &&edges : graph_List[v])
    {
        if(visited[edges]) continue;
        DFS(edges);
    }
    
}

int main(){

    // Take input 
    int n, m; cin>> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u , v; cin >> u >> v;
        graph_List[u].push_back(v);
        graph_List[v].push_back(u);
    }
    // for (int i = 1; i <= 1000; i++)
    // {
    //     cout << "level : " << i;
    //     for (auto &&val : graph_List[i])
    //     {
    //             cout << val <<" " ;
    //     }
    //     cout<< endl;
    // }
    
    
    // // count the components nodes
    vector<int>Size_of_Nodes;
    for (int i = 1; i <= 1000; i++)
    {
            counter = 0;     
            if(visited[i]) continue;
            DFS(i);
            Size_of_Nodes.push_back(counter);
    }
    
    // sort them and print them 
    sort(Size_of_Nodes.begin(), Size_of_Nodes.end());
    
    for (auto &&i : Size_of_Nodes)
    {
        if(i == 1) continue;
        cout << i << " ";
    }


    return 0;
}