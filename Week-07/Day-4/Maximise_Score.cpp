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

        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int newVal[n];

        for (int i = 0; i < n; i++)
        {

            int left = -1;
            int right = -1;
            if (i == 0)
            {
                left = abs(arr[i] - arr[i + 1]);
            }
            else if (i == (n - 1))
            {
                right = abs(arr[i - 1] - arr[i]);
            }
            else
            {
                left = abs(arr[i - 1] - arr[i]);
                right = abs(arr[i + 1] - arr[i]);
            }

            newVal[i] = max(left, right);
        }

        int mn = INT_MAX;
        for (ll i = 0; i < (n); i++)
        {
            mn = min(mn, newVal[i]);
        }

        cout << mn << endl;
    }
    return 0;
}