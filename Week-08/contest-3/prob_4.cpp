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

        if (n > 9)
        {
            int sumOf = 9 * (9 + 1) / 2;

            ll val = 0;

            ll howMany = n / 9;

            int outContext = n % 9;

            int rest = outContext * (outContext + 1) / 2;

            val = sumOf * howMany;

            cout << val + rest << endl;
        }
        else
        {
            cout << n * (n + 1) / 2 << endl;
        }
    }
    return 0;
}