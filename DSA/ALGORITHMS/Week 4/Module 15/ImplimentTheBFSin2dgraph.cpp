#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3 + 1;
bool visited[N][N];
int dis[N][N];
int n, m; 
vector<pii> direciton = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void bfs(int si, int sj){
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pii parent = q.front();
        q.pop();
        int i = parent.first;
        int j = parent.second;
        for (auto &&dir : direciton)
        {
            int ni = i + dir.first;
            int nj  = j + dir.second;
            if(isValid(ni, nj) && !visited[ni][nj])         
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                dis[ni][nj] = dis[i][j] + 1; 
            }
        }
        
    }
    
}
int main(){

   cin >>n >>m;
     char a[n][m];

     for(int i = 0; i < n ; i++){
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
     }


     int si, sj; cin >> si >> sj;

     bfs(si, sj);

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
        {
            cout << dis[i][j] << " ";
        }
         cout << endl;
     }
     

    return 0;
}