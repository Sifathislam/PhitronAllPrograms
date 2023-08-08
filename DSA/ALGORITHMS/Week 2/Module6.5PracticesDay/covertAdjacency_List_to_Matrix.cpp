#include<bits/stdc++.h>
using namespace std;
// Create Matrix and List 
const int N = 1e3+5;
int Adj_Matrix[N][N];
vector<int> Adj_List[N];

int main(){
    // This the method 1 of the convet 
    // Take input 
    // int n, m; cin >> n >> m;
    // for (int i = 0; i < m; i++)
    // {
    //     int u, v; cin >> u >> v;
    //     Adj_Matrix[u][v] = 1;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << Adj_Matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // This the method 2 of the convert  
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        Adj_List[u].push_back(v);
    }
    // Convet the list to the metrix 

    for (int i = 1; i <= n; i++)
    {
        for (auto &&val : Adj_List[i])
        {
            Adj_Matrix[i][val] = 1;
        }
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << Adj_Matrix[i][j] << " ";
        }
        cout << endl;
    }
         

    return 0;
}