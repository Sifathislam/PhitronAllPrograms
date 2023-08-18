#include<bits/stdc++.h>
using namespace std;
// create the variables 
typedef pair<int, int> Pii;
const int N = 1e3 + 1;
vector<string> graph;
int level[N][N];
int visited[N][N];
vector<Pii> direc = {{0,-1}, {0, 1},{-1, 0}, {1, 0}};
int n , m;
bool isValid(int i, int j){
    return(i >= 0 && i < n && j >= 0 && j < m);
}

void BFS(int si, int sj){
    queue<Pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        Pii unpair = q.front();
        q.pop();

        int i = unpair.first;
        int j = unpair.second;
        for (auto &&d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if(isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != 'x'){
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    
    }
    
}
    
void DFS(int i, int j){
    // if(graph[i][j] == 'e') {
    //     level [i][j] = level[i - 1][j - 1] +  1;
    // } 
    visited[i][j] = true;
    for (auto &&d : direc)
    {
        int ni , nj;
        ni = i + d.first;
        nj = j + d.second;
        if(isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != 'x'){
            DFS(ni,nj);
            visited[ni][nj] = true;
            level[ni][nj] = level[i][j] + 1;
        }
    }
    
}


int main(){
    // take input 
    int si , sj, di, dj;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            if(s[j] == 's'){
             si = i,sj = j;
            }

             if (s[j] == 'e')
             {
                di = i, dj = j;
             }
            }
        graph.push_back(s);
    }
    
    // callt the bfs 
    // BFS(si, sj);
    DFS(si, sj);
    // print the result 
    if(level[di][dj] != 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    

     

    return 0;
}