#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll cnt = 0;

    ll last = arr[0];

    for (ll i = 1; i < n; i++)
    {

        if (last > arr[i])
        {
            cnt += last - arr[i];
            last = arr[i] + (last - arr[i]);
        }
        else
        {

            last = arr[i];
        }
    }

    cout << cnt << endl;

    return 0;
}