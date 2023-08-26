#include<bits/stdc++.h>
using namespace std;
// Create the matrix 
const int N = 1e3 + 5; 
const int INF = 1e9 + 5;
int dis[N][N];
int n, m; 
void intializetion(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i != j){
                dis[i][j] = INF;
            }
        }
        
    }
    
}
int main(){
    
    cin >> n >> m;
    intializetion();

    for (int i = 0; i < m; i++)
    {
        int u , v, w;
        cin >> u >> v >> w;
        dis[u][v] = w;
        // dis[v][u] = w;
    }


    // Apply the fordshall 
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
    
        }
    
    }
    
    
     for (int i = 1; i <= n; i++)
     {
        for (int j = 1; j <= n; j++)
        {
            if(dis[i][j] == INF)cout << " X ";
            else cout << " " << dis[i][j] << " ";
        }
        cout << endl;
     }
     

    return 0;
}