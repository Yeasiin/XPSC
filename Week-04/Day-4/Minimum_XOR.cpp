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

        ll sumXor = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sumXor = sumXor ^ arr[i];
        }

        ll ans = sumXor;
        for (ll i : arr)
        {
            ans = min(ans, sumXor ^ i);
        }

        cout << ans << endl;
    }
    return 0;
}