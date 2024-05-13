#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> c(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i]]++;
        }

        sort(a.begin(), a.end());

        int ans = 0;
        int i, j;
        for (int k = 1; 2 * k - 2 < n; k++)
        {
            for (
                i = 2 * k - 2, j = k; i >= k - 1; i--, j--)
            {
                if (a[i] > j)
                {
                    break;
                }
            }

            if (j == 0)
            {
                ans = k;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}