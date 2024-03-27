#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll n;
    ll s;
    cin >> n >> s;

    ll arr[n + 50];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll r = 0;
    ll l = 0;

    ll sum = 0;
    ll ans = INT_MAX;

    while (r < n)
    {
        sum += arr[r];

        if (sum >= s)
        {
            // ans = min(ans, (r - l) + 1);
            while (sum > s && l < r)
            {
                sum -= arr[l];
                l++;
                if (sum > s)
                {
                    ans = min(ans, (r - l) + 1);
                }
            }
        }

        r++;
    }

    if (ans == 0)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }

    return 0;
}