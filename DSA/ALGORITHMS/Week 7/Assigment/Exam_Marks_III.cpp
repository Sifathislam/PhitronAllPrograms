#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int tm;
        cin >> tm;
        int w[n];

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        int s = abs(tm - 1000);

        //  Make dp and apply unbound kanpsack subset minmum
        int dp[n + 1][s + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }
                if (i == 0)
                {
                    dp[i][j] = INT_MAX - 1;
                    continue;
                }

                if (j >= w[i - 1])
                {
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if(dp[n][s] == INT_MAX - 1){
            cout << -1 << endl;
        }
        else{
            cout << dp[n][s] << endl;
        }
    }

    return 0;
}