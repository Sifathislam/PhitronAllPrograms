#include<bits/stdc++.h>
using namespace std;
// create the graph List 
const int N = 1e3+6;
vector<int> graph_List[N];
bool visited[N];

// create cycle detection by dfs 
bool find_Cycle(int u, int p){
    bool isCycleExits = false;
    visited[u] = true;
    for (int v : graph_List[u])
    {
        if(v == p) continue;
        if(visited[v]) return true;

        isCycleExits = isCycleExits || find_Cycle(v, u);
    }
    return isCycleExits;
}

int main(){

    // Take input 
    int n, e; cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int ver_one, ver_two; 
        cin >> ver_one >> ver_two;

        graph_List[ver_one].push_back(ver_two);
        graph_List[ver_two].push_back(ver_one);
    }

    // Find the Cycle 
    if(find_Cycle(1, -1)){
        cout << "Cycle Found"<< endl;
    }
    else{
        cout << "Cycle not Found" << endl;
    }

    
     

    return 0;
}