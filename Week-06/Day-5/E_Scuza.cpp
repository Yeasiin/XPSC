#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pref(n + 2, 0);

        for (int i = 1; i <= n; i++)
        {
            pref[i] = (pref[i - 1] + a[i]);
        }

        vector<pair<ll, int>> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }

        sort(b.begin(), b.end());

        vector<ll> ans(q);

        int ap = 0;
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (ap == n || a[ap + 1] > b[i].first)
                    break;
                ap++;
            }

            ans[b[i].second] = pref[ap];
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}