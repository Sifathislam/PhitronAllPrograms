#include<bits/stdc++.h>
using namespace std;
// create variables ;
typedef pair<int, int>Pii;
const int N = 1e3+ 5;
int level[N][N]; 
bool visited[N][N];
int n, m; 
vector<Pii> direction = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};


bool isValid(int i, int j){
    return (i >=  0 && i < n && j >= 0 && j < m);
}

void Bfs(int si,int sj){
    queue<Pii> q;
    q.push({si, sj});
    level[si][sj] = 0;
    visited[si][sj] = true;

    while (!q.empty())
    {
        Pii main = q.front();
        int i = main.first;
        int j = main.second;
        q.pop();

        for (auto &&dir : direction)
        {
            int ni = i + dir.first;
            int nj = j + dir.second;

            if(isValid(ni, nj) && !visited[ni][nj]){
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
        
    }

}

void reset(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;

        }
        
    }
    
}

int main(){

     int test_Case; cin >> test_Case;

     for (int i = 0; i < test_Case; i++)
     {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki  >> kj >> qi >> qj;
        // cout << si << " " << sj << " " << di << " " << dj << endl;

        Bfs(ki, kj);

        if(visited[qi][qj]){
        cout << level[qi][qj] << endl;
        }
        else{
            cout << -1 << endl;
        }
        reset();

     }
     

    return 0;
}