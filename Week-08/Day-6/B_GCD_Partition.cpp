#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b)
{
    if ((a % b) == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{

    int t;
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

        ll prefix[n];
        ll suffix[n];

        prefix[0] = arr[0];
        suffix[n - 1] = arr[n - 1];

        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        for (ll i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + arr[i];
        }

        ll ans = 1;

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, gcd(max(prefix[i], suffix[i + 1]), min(prefix[i], suffix[i + 1])));
        }

        cout << ans << endl;
    }

    return 0;
}