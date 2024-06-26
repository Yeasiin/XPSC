#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int n, t;
    cin >> n >> t;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](ll m)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / arr[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}