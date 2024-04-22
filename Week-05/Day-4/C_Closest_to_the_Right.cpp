#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll right_closest_binary_search(ll arr[], ll sz, ll val)
{
    ll idx = -1;

    ll l = 0;
    ll r = sz - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        if (arr[mid] >= val)
        {
            idx = mid + 1;
            r = mid - 1;
        }
        else if (arr[mid] > val)
        {
            r = mid - 1;
        }
        else if (arr[mid] < val)
        {
            l = mid + 1;
        }
    }
    return idx;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < k; i++)
    {
        ll q;
        cin >> q;

        ll idx = right_closest_binary_search(arr, n, q);
        if (idx == -1)
        {
            cout << n + 1;
        }
        else
        {
            cout << idx;
        }

        cout << endl;
    }

    return 0;
}