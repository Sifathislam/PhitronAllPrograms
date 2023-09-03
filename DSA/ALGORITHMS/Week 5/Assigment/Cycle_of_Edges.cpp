#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int parentLevel[N];

void Dsu_Set(int n){
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        parentLevel[i] = 0;
    }
}

int Dsu_find(int node){
    if(node == parent[node]) return node;

    return parent[node] = Dsu_find(parent[node]);
}

void Dsu_union(int a, int b){
    int leader_A = Dsu_find(a);
    int leader_B = Dsu_find(b);
    
    if(leader_A != leader_B){

        if(parentLevel[leader_A] > parentLevel[leader_B]){
            parent[leader_B] = leader_A;
        }
        else if(parentLevel[leader_A] == parentLevel[leader_B]){
            parent[leader_B] = leader_A;
            parentLevel[leader_A]++;
        }
        else{
            parent[leader_A] = leader_B;
        }
    }
}
int main(){

    int n, e; cin >> n >> e;

    Dsu_Set(n);
    int cnt = 0;
    while (e--)
    {
        int a, b; cin >> a >> b;
        int leaderA = Dsu_find(a);
        int leaderB = Dsu_find(b);
        if(leaderA == leaderB){
            cnt++;
        }
        else{
            Dsu_union(a,b);
        }
    }
    cout << cnt << endl;
     
    return 0;
}