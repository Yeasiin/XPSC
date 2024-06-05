

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    // your code goes here

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll arr[n][2];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }

        ll ans = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {

                ll res1 = arr[i][1] * arr[j][0];
                ll res2 = arr[i][0] * arr[j][1];
                ans = max(ans, res1 + res2);
            }
        }

        cout << ans << endl;
    }
}
