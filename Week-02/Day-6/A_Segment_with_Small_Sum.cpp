#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{

    ll n, s;
    cin >> n >> s;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll l = 0;
    ll r = 0;

    ll sum = 0;
    ll cnt = 0;

    ll _cnt = 0;

    ll ans = 0;

    while (r < n)
    {
        sum += arr[r];
        cnt++;

        if (sum <= s)
        {
            ans = max(ans, cnt);
        }
        else
        {

            while (sum > s)
            {
                sum -= arr[l];
                l++;
                cnt--;
            }
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}