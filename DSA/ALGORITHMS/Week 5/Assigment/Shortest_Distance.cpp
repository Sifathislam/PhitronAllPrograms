#include<bits/stdc++.h>
using namespace std;
const long long int N = 1e18; 

int main(){
    
     int n, e; cin >> n >> e;

     long long dis[n+1][n+1];

     for (int i = 1; i <=n; i++)
     {
        for (int j = 1; j <= n; j++)
        {
            if(i == j) dis[i][j] = 0;
            else dis[i][j] = N;
        }
        
     }

    // Take input 
     while (e--)
     {
        int a, b, w; cin >> a >> b >> w;
        if(dis[a][b] < w) continue;
        dis[a][b] = w;
     }
    
    // Floyd warshall
     for (int k = 1; k <= n;k++)
     {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if(dis[i][j] > dis[i][k] + dis[k][j]){
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
            
        }
        
     }
     
   int q; cin >> q;
   while (q--)
   {
    int a, b; cin >> a >> b;
    if(dis[a][b] == N) cout << -1 << endl;
    else cout << dis[a][b] << endl;

   }
   
     

    return 0;
}