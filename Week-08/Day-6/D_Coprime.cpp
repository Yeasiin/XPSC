#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        vector<int> v(1001, 0);

        ll n;
        cin >> n;
        int mx = -1;

        int tmp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> tmp;
            v[tmp] = i;
        }

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (v[i] && v[j] && int(__gcd(i, j)) == 1)
                {
                    mx = max(mx, v[i] + v[j]);
                }
            }
        }

        cout << mx << endl;
    }

    return 0;
}