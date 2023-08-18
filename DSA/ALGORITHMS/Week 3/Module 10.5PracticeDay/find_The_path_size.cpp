#include <bits/stdc++.h>
using namespace std;
// creating the variables
vector<string> graph;
typedef pair<int, int> Pii;
const int N = 1e3 + 5;
bool visited[N][N];
int level[N][N];
int n, m;
vector<Pii> direction = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void BFS(int si, int sj)
{
    queue<Pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        Pii Unpair = q.front();
        q.pop();

        int i = Unpair.first;
        int j = Unpair.second;

        for (auto &&d : direction)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != 'x')
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    int si, sj, di, dj; 
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
        cout << -1 << endl;
    }
    return 0;
}