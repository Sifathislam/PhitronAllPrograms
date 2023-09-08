#include <bits/stdc++.h>
using namespace std;
// Create the dynamic program value store
const int N = 1003;
int DP_V[N][N];
int knapsack(int n, int s, int v[], int w[])
{

    // Base case
    if (s == 0 || n == 0)
        return 0;

    if (DP_V[n][s] != -1)
        return DP_V[n][s];
    if (w[n - 1] <= s)
    {
        int opt1 = knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
        int opt2 = knapsack(n - 1, s, v, w);

        return DP_V[n][s] = max(opt1, opt2);
    }
    else
    {
       return DP_V[n][s] = knapsack(n - 1, s, v, w);
    }
}

int main()
{
    // Take input of test case 
    int t;
    cin >> t;
    while (t--)
    {
        // Take input 
        int n;
        cin >> n;
        int s;
        cin >> s;

        int v[n], w[n];

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                DP_V[i][j] = -1;
            }
        }
        int result = knapsack(n, s, v, w);
        cout << result << endl;
    }

    return 0;
}