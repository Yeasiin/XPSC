#include <bits/stdc++.h>

#define mod 1000000007
using namespace std;

using ll = long long;

ll power(ll base, ll n)
{

    ll result = 1;

    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }

    return result % mod;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        string s;
        while (k)
        {

            if (k % 2 == 0)
            {
                s += '0';
            }
            else
            {
                s += '1';
            }
            k /= 2;
        }

        ll ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                ans += power(n, i);
            ans %= mod;
        }
        cout << ans << endl;
    }

    return 0;
}