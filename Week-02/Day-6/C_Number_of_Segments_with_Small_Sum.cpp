#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll n, s;
    cin >> n >> s;

    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll r = 0;
    ll l = 0;

    ll sum = 0;
    ll ans = 0;

    while (r < n)
    {
        sum += arr[r];

        if (sum <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > s)
            {
                sum -= arr[l];
                l++;
            }
            ans += r - l + 1;
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}