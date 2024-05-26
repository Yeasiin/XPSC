#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll a[n];
        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool imp = false;
        ll zeroDiff = -1;
        ll diff = -1;

        for (int i = 0; i < n; i++)
        {

            if (a[i] < b[i])
            {
                imp = true;
                break;
            }

            if (b[i] == 0)
            {
                zeroDiff = max(zeroDiff, a[i] - b[i]);
            }
            else
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        imp = true;
                        break;
                    }
                }
            }
        }

        if (imp)
        {
            cout << "NO\n";
        }
        else
        {
            if (diff == -1 || zeroDiff <= diff)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}