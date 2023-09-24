#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int> graph_List[N];
bool visited[N];
int level[N];

void bfs(int a)
{
    queue<int> q;
    q.push(a);
    visited[a] = true;
    level[a] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto &&v : graph_List[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph_List[a].push_back(b);
        graph_List[b].push_back(a);
    }

    int a, b, c;
    cin >> a >> b >> c;
    bfs(a);

    if (level[b] <= c && level[b] % 2 == c % 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}