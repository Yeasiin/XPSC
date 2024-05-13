#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n, mid;

    auto ok = [&](int mid)
    {
        if (mid < min(x, y))
        {
            return false;
        }

        int cnt = 1;
        mid -= min(x, y);

        cnt += mid / x + mid / y;

        return cnt >= n;
    };

    while (l + 1 < r)
    {

        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << endl;

    return 0;
}