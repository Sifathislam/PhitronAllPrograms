#include <bits/stdc++.h>
using namespace std;
// Create the dp
const int N = 1e5 + 9;
int dp[N];

// Top down aproaceh
bool choice(int n, long long x)
{
    if (n == x)
        return true;
    else if (x > n)
        return false;

    if (dp[x] != -1)
        return dp[x];

    bool opt1 = choice(n, x + 3);
    bool opt2 = choice(n, x * 2);

    return dp[x] = opt1 || opt2;
}
int main()
{
    // Take input of test case
    int t;
    cin >> t;

    // Start main work
    while (t--)
    {
        // Take input
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            dp[i] = -1;
        }
        // Call the func and print the result
        bool result = choice(n, 1);
        if (result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}