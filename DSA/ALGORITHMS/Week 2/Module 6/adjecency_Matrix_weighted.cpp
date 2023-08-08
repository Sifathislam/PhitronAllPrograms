#include<bits/stdc++.h>
using namespace std;


// Create an global Arry for work in it in any where without passing it 
const int N = 1e3+5;
int adj_Matrix_Arr[N][N];
int main(){

     int n, m;
     cin >> n >> m;

     for (int i = 0; i < m; i++)
     {
        int u , v , w; 
        cin >> u >> v >> w;
        adj_Matrix_Arr[u][v] = w; // if the input is directed than use only one otherwise have to use the two system 
        // adj_Matrix_Arr[v][u] = w;
     }

     for (int i = 1; i <= n; i++)
     {
        for (int j = 1; j <= m; j++)
        {
            cout << adj_Matrix_Arr[i][j]<< " ";
        }
        cout << endl;
     }
     
     


    return 0;
}