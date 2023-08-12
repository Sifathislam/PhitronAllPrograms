#include<bits/stdc++.h>
using namespace std;
// Create the Ajacency List  
const int N = 1e5+10;
vector<int> graph_List[N];
bool visited[N];
int Level[N];

// create the BFS 
void BFS_Level_Count(int v){
    // create the queue
    queue<int> q;
    q.push(v);
    visited[v] = true;
    Level[v] = 0;

    while (!q.empty())
    {
        // first sotre and rmove 
        int tmp_v = q.front();
        q.pop();
        for (auto &&edges : graph_List[tmp_v])
        {
            if(visited[edges])continue;
            q.push(edges);
            visited[edges] = true;
            Level[edges] = Level[tmp_v] + 1;
        }
        
    }
    

}

int main(){
    // Take input
    int n, e; cin >> n >> e;

    for (int i = 1; i <= e; i++)
    {
        int v1, v2; cin >> v1 >> v2;
        graph_List[v1].push_back(v2);
        graph_List[v2].push_back(v1);
    }
    int what_level; cin >> what_level;

    if (what_level == 0)
    {
        cout << 0;
        return 0;
    }

    // Call BFS to count the Level
    BFS_Level_Count(0);

    int heigest_level = 0;

    for (int i = 1; i <= N; i++)
    {
        heigest_level = max(heigest_level, Level[i]);
    }
    if(what_level > heigest_level){
        cout << -1;
        return 0;
    }
 
    vector<int> level_nodes;
    for (int i = 1; i <= N; i++)
    {

        if(Level[i] == what_level) level_nodes.push_back(i);
    }
    
    unique(level_nodes.begin(), level_nodes.end());
    
    sort(level_nodes.begin(), level_nodes.end());

    for (auto &&i : level_nodes)
    {
        cout<< i << " ";
    }
      
     
    
    return 0;
}