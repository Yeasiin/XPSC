#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    auto ok = [&](ll m)
    {
        ll cnt = 0;

        for (int i = (n / 2); i < n; i++)
        {
            cnt += (arr[i] < m ? (m - arr[i]) : 0);
        }

        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}