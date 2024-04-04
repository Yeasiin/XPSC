#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll n, k, q;
        cin >> n >> k >> q;

        // k==day
        // q==temp;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll l = 0;
        ll r = 0;
        ll ans = 0;

        while (r < n)
        {
            if (arr[r] <= q)
            {
                int dayCheck = r - l + 1;

                if (dayCheck >= k)
                {
                    int rest = dayCheck - k;
                    if (rest >= 0)
                    {
                        ans += rest + 1;
                    }
                }
            }
            else
            {
                while (l <= r)
                {
                    l++;
                }
            }

            r++;
        }
        cout << ans << endl;
    }
    return 0;
}