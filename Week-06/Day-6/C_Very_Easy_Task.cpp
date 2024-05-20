#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll n, x, y;
    cin >> n >> x >> y;

    ll mn = min(x, y);

    ll l = 0, r = max(x, y) * n, mid, ans = 0;

    auto ok = [&](ll mid)
    {
        if (mid < mn)
        {
            return false;
        }
        mid -= mn;

        ll cnt = 1;

        cnt += (mid / x) + (mid / y);

        return (cnt >= n);
    };

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