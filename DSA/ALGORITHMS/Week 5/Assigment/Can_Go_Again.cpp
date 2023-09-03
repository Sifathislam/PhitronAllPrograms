#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u;
    int v;
    long long int w;
    edge(int u, int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    // Take input 
    vector<edge> v;
    int n, e;
    cin >> n >> e;

    if(e == 0){
        cout << 0;
        return 0;
    }

    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        edge ed(a, b, w);
        v.push_back(ed);
    }
    int sizeOfdis = 1e3 + 10;
    vector<long long int> dis(sizeOfdis +1);
    const long long int N = 1e18 + 1000000000;
    for (int i = 0; i <= sizeOfdis; i++)
    {
        dis[i] = N;
    }
    
    int s; cin >> s;
    dis[s] = 0;
    
    // BellMan ford 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            edge edges = v[j];

            int u = edges.u;
            int v = edges.v;
            long long int w = edges.w;

            if (dis[u] != N && dis[u] + w <= dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    // Print the resutl 
    bool cycle = false;
    for (int j = 0; j < v.size(); j++)
    {
        edge edges = v[j];

        int u = edges.u;
        int v = edges.v;
        long long int w = edges.w;

        if (dis[u] != N && dis[u] + w < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    int q; cin >> q;
    while (q--)
    {
        int a; cin >> a;
        if(dis[a] >= 1e18 + 10000007 ) cout << "Not Possible" << endl;
        else cout << dis[a] << endl;
    }
    return 0;
}