#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        ll cap;
        cin >> n >> cap;

        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll l = 0, r = 2e10, mid;

        auto ok = [&](ll mid)
        {
            ll total = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] < mid)
                {
                    total += (mid - arr[i]);
                }
            }

            return (total <= cap);
        };

        while (l < r)
        {
            mid = l + (r - l + 1) / 2;

            if (ok(mid))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l << endl;
    }

    return 0;
}