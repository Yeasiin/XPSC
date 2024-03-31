#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n, q;
        cin >> n >> q;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll prefixSum[n];
        prefixSum[0] = arr[0];

        for (ll i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        for (ll i = 0; i < q; i++)
        {

            ll l, r, k;
            cin >> l >> r >> k;

            ll tilNow;
            if (l == 1)
            {
                tilNow = 0;
            }
            else
            {
                tilNow = prefixSum[l - 2];
            }

            ll numberOfIndex = r - l + 1;
            ll toAdd = numberOfIndex * k;

            ll restValue = prefixSum[n - 1] - prefixSum[r - 1];

            ll totalValue = restValue + toAdd + tilNow;

            if (totalValue % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}