#include<bits/stdc++.h>
using namespace std;
// Create the Ajacency List  
const int N = 1e5+3;
vector<int> graph_List[N];
bool visited[N];
int Level[N];

// create the BFS 
void BFS_Level_Count(int v){
    // create the queue
    queue<int> q;
    q.push(v);
    visited[v] = true;

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

    for (int i = 0; i < e; i++)
    {
        int v1, v2; cin >> v1 >> v2;
        graph_List[v1].push_back(v2);
        graph_List[v2].push_back(v1);
    }
    int what_level; cin >> what_level;
    // Call BFS to count the Level
    BFS_Level_Count(1);
    cout << "Level of " << n << " = " << Level[n];
      
     
    
    return 0;
}