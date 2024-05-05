#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int maxN = 1e4;

int main()
{

    vector<ll> pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i, 3));
    }

    ll t;
    cin >> t;

    while (t--)
    {

        ll x;
        cin >> x;

        bool found = false;

        for (ll i = 0; i < maxN; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }

            ll l = 0, r = (maxN - 1), mid;
            ll need = x - pw[i];
            bool ok = false;

            while (l <= r)
            {
                mid = l + (r - l) / 2;

                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (ok)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}