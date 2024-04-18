#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    // your code goes here

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        int cnt = 0;
        string val;

        cin >> val;

        for (int i = 1; i < n; i++)
        {

            if (val[i] == val[i - 1])
                cnt++;
        }

        cout << cnt << endl;
    }
}
