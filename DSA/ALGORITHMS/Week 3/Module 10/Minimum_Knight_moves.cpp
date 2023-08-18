#include<bits/stdc++.h>
using namespace std;
// create variables ;
typedef pair<int, int>Pii;
const int N = 1e3+ 5;
int level[N][N]; 
bool visited[N][N];
vector<Pii> direction = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};


bool isValid(int i, int j){
    return (i >=  0 && i < 8 && j >= 0 && j < 8);
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
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
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
        string s1, s2; cin >> s1 >> s2;
        int si, sj, di, dj;
        si = s1[0] - 97;
        sj = s1[1] - 49;
        di = s2[0] - 97;
        dj = s2[1] - 49;
        // cout << si << " " << sj << " " << di << " " << dj << endl;

        Bfs(si, sj);

            cout << level[di][dj] << endl;

        reset();

     }
     

    return 0;
}