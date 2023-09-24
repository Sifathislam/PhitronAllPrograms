#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        int nn = INT_MIN, m = INT_MIN;
        int indexofnn = 0, indexofm = 0;
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (nn < x)
            {
                indexofnn = i;
            }
            nn = max(nn, x);
            arr[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < nn)
            {
                if (m < arr[i])
                {
                    indexofm = i;
                }
                m = max(m, arr[i]);
            }
        }

        cout << min(indexofnn,indexofm) << " " << max(indexofnn,indexofm) << endl;
    }

    return 0;
}