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

        string a, b;
        cin >> a >> b;

        ll player[2] = {0};

        for (ll i = 0; i < n; i++)
        {

            if (a[i] == b[i])
            {
                continue;
            }
            else if (a[i] == 'R' && b[i] == 'S')
            {
                player[0]++;
            }
            else if (b[i] == 'R' && a[i] == 'S')
            {
                player[1]++;
            }
            else if (a[i] == 'S' && b[i] == 'P')
            {
                player[0]++;
            }
            else if (b[i] == 'S' && a[i] == 'P')
            {
                player[1]++;
            }
            else if (a[i] == 'P' && b[i] == 'R')
            {
                player[0]++;
            }
            else if (b[i] == 'P' && a[i] == 'R')
            {
                player[1]++;
            }
        }
        if (player[0] == player[1])
        {
            cout << 1 << endl;
        }
        else if (player[0] < player[1])
        {
            int ct = 0;

            while (player[0] <= player[1])
            {
                player[0]++;
                player[1]--;
                ct++;
            }

            // cout << player[1] - player[0] << endl;
            cout << ct << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}