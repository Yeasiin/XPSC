#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    string t, p;

    cin >> t >> p;

    int n = t.size();
    int m = p.size();

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](int mid)
    {
        bool found = false;
        vector<int> ext(n + 1, true);

        for (int i = 0; i < mid; i++)
        {
            ext[arr[i]] = false;
        }

        int j = 0;

        for (int i = 0; i < n; i++)
        {

            if (t[i] == p[j] && ext[i + 1])
            {
                j++;
            }

            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = n, mid, ans = 0;

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