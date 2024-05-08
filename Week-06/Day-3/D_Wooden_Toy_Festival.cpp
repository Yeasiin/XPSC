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
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        auto ok = [&](int mid)
        {
            int l = 0, cnt = 1;

            for (int r = 0; r < n; r++)
            {
                if (arr[r] - arr[l] > (2 * mid))
                {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans = 0;

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
    }
    return 0;
}