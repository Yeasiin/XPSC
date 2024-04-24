#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll coin = 0;

        coin = n * a;

        if (coin > s)
        {
            ll extraCoin = coin - s;
            if (extraCoin > 0)
            {
                ll extraCoinOfMulti = ceil(((float)extraCoin / n));
                ll coinNeedToSub = extraCoinOfMulti * n;
                coin -= coinNeedToSub;
            }
        }
        // cout << coin << endl;

        if (coin + b >= s)
        {
            cout << "YES\n";
        }
        else
        {
            if (coin > s)
            {
                cout << "NO\n";
            }
            else
            {

                if (coin + b >= s)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}