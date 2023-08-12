#include<bits/stdc++.h>
using namespace std;

// Create an Adjacency Matrix
const int N = 1e3+7;
// int Adjecency_Matrix[N][N];

// create an Adjecency_List  
vector <int> Adjecency_List[N];

int main(){
    // System ONE Covert Matrix to List 
    // // Take Input Matrix 
    // int e; cin >> e;
    // for (int i = 1; i <= e; i++)
    // {
    //     for (int j = 1; j <= e; j++)
    //     {
    //         int val; cin >> val;
    //         Adjecency_Matrix[i][j] = val;
    //     }
        
    // }
     
    // // Convet the Matrix to List 
    // for (int i = 1; i <= e; i++)
    // {
    //     for (int j = 1; j <= e; j++)
    //     {
    //         if (Adjecency_Matrix[i][j] == 1)
    //         {
    //             Adjecency_List[i].push_back(j);
    //         }
            
    //     }
        
    // }

    // // print The final relsult 
    // for (int i = 1; i <= e; i++)
    // {
    //     cout << "List "<< i  << " : ";
    //     for (auto &&edge : Adjecency_List[i])
    //     {
    //         cout << edge << " ";
    //     }
    //     cout << endl;
    // }

    // System TWO Covert Matrix to List 
    
    int e; cin >> e;
    // Convet the Matrix to List 
    for (int i = 1; i <= e; i++)
    {
        for (int j = 1; j <= e; j++)
        {
            int val ; cin >> val;
            if (val == 1)
            {
                Adjecency_List[i].push_back(j);
            }
            
        }
        
    }
     // // print The final relsult 
    for (int i = 1; i <= e; i++)
    {
        cout << "List "<< i  << " : ";
        for (auto &&edge : Adjecency_List[i])
        {
            cout << edge << " ";
        }
        cout << endl;
    }


    return 0;
}