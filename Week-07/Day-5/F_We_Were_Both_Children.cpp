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

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int feq[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > n)
                continue;
            feq[arr[i]]++;
        }

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {

            ll cnt = 0;
            for (ll j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    cnt += feq[j];

                    if (j * j != i)
                    {
                        cnt += feq[i / j];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}