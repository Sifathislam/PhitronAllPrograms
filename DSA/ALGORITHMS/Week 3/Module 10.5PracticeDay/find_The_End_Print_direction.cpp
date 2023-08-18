#include<bits/stdc++.h>
using namespace std;

// Create the variables 
const int N = 1e3+4;
typedef pair<int, int> Pii;
vector<string> graph;
bool visited[N][N];
int level[N][N];
vector<Pii> parent[N][N];
vector<Pii> direciton = {{0, -1}, {0, 1},{-1, 0}, {1, 0}};
int n, m;
bool isValid(int i, int j){
    return(i >= 0 && i < n && j >= 0 && j < m);
}

void BFS(int si, int sj){

    queue<Pii>q; 
    q.push({si, sj});

    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        Pii Unpair = q.front();
        q.pop();

        int i = Unpair.first;
        int j = Unpair.second;

        for (auto &&d : direciton)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            
            if (isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != 'x')
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
                parent[ni][nj] = {{i, j}};
            }
            
        }
    }
}

int main(){
     cin >> n >> m;
     int si , sj, di, dj;
     for (int i = 0; i < n; i++)
     {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            if(s[j] == 's') si = i, sj = j;

            if(s[j] == 'e') di = i, dj = j;

        }
        graph.push_back(s);
     }

     BFS(si, sj);

     if(level[di][dj] != 0){

        cout << level[di][dj] << endl;
     }

     else{

        cout<< -1 ;
        return 0;
     }

     vector<Pii> path;
     Pii curr = {di,dj};

     while (!(curr.first == -1 && curr.second == -1))
     {
        path.push_back(curr);
        curr = parent{[curr.first][curr.second]};
     }
     
     path.push_back({si, sj});

     reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++)
    {
        if(path[i-1].first == path[i].first){
            if(path[i - 1].second == path[i].second-1)
                cout<< 'R';
            else
                cout << 'L';
        }
        else{
            if(path[i - 1].first == path[i].first-1){
                cout<< 'D' ;
            }
            else 
                cout << 'U'; 
        }
    }
    
     
     

    return 0;
}