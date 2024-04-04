#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, arr[i] - arr[0]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, arr[n - 1] - arr[i]);
        }

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, arr[i - 1] - arr[i]);
        }

        cout << ans << endl;
    }

    return 0;
}