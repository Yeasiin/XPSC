#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll n, b;
        cin >> n >> b;

        int ans = -1;
        ll tmp;
        for (ll i = 0; i < n; i++)
        {
            cin >> tmp;

            if ((b & tmp) == b)
            {
                ans &= tmp;
            }
        }

        if (ans == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}