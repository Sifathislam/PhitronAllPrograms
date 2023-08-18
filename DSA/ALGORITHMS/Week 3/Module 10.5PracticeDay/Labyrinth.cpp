#include<bits/stdc++.h>
using namespace std;
// Create and vector that can sotre graph and other variables createing 
vector<string> graph;
typedef pair<int, int> pii;
const int N = 1e3+5;
int visited[N][N]; 
int level[N][N];
pii parent[N][N];
int n, m;

vector<pii> direction = {{0,-1}, {0, 1},{-1, 0}, {1, 0}};

bool isValid(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void BFS_SSSP(int si, int sj){
    
    // create queue
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        // store and remove
        pii unpair = q.front();
        int i = unpair.first;
        int j = unpair.second;
        q.pop();

        for (auto dir : direction)
        {
            int ni = i + dir.first;
            int nj = j + dir.second;

            if(isValid(ni,nj) && !visited[ni][nj] && graph[ni][nj]!='#')
			{
				q.push({ni,nj});
				visited[ni][nj] = true;
				level[ni][nj] = level[i][j]+1;
				parent[ni][nj] = {i,j};
			}
        }
        


    }
    

}
int main(){
    // Take input and find the start place 
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            if(s[j] == 'A'){
                si = i,sj = j;
            }
            if(s[j] == 'B'){
                di = i,dj = j;
            }
        }
        graph.push_back(s);
    }
    // Start the BFS 
    BFS_SSSP(si, sj);

    if(level[di][dj] != 0){
        cout << "YES" <<endl;
        cout << level[di][dj] << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    vector<pii> path;
    pii current = {di, dj};

    while (!(current.first == si && current.second == sj))
    {
        path.push_back(current);
        current = parent[current.first][current.second];
    }

    path.push_back({si,sj});
    reverse(path.begin(), path.end());

    for (int i = 1; i < path.size(); i++)
    {
        if(path[i-1].first == path[i].first){
            if (path[i - 1].second == path[i].second - 1)
                cout << "R";
            else
                cout << "L";
            
        }
        else{
            if(path[i - 1].first == path[i].first - 1)
                cout << "D";
            else
                cout << "U";
        }
    }
    
    
    

    

    return 0;
}