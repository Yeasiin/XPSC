// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll n;
    ll k;
    cin >> n >> k;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll r = 0;
    ll l = 0;

    ll ans = 0;

    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(arr[r]);

        ll mn, mx;

        mn = *ml.begin();
        mx = *ml.rbegin();

        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {

            while (l < r)
            {

                mn = *ml.begin();
                mx = *ml.rbegin();

                if (mx - mn <= k)
                {
                    break;
                }

                auto it = ml.find(arr[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}