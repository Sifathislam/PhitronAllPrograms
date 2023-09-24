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
        int d;
        cin >> d;
        int w[n];
        int S = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            S+= w[i];
        }


        //  Make dp and apply unbound kanpsack subset minmum
        int dp[n + 1][d + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= d; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if (i == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }

                if (j >= w[i - 1])
                {
                    dp[i][j] = (dp[i][j - w[i - 1]] + dp[i - 1][j]) % 1000000007;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] % 1000000007;
                }
            }
        }
       
    
int totalWays = dp[n][S];

int waysToAchieveSumMinusD = dp[n][S - d];

int waysToAchieveAbsoluteDiffD = (totalWays - waysToAchieveSumMinusD + 1000000007) % 1000000007;
        
    }

    return 0;
}