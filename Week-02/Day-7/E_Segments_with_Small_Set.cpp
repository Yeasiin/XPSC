// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll getSz(map<ll, ll> mp)
{
    ll sz = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 0)
        {
            sz++;
        }
    }
    return sz;
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

    ll r = 0;
    ll l = 0;

    ll ans = 0;

    map<ll, ll> mp;

    while (r < n)
    {
        mp[arr[r]]++;

        if (mp.size() <= k)
        {
            ans += r - l + 1;
        }
        else
        {

            while (l < r)
            {

                if (mp.size() <= k)
                {
                    break;
                }
                if (mp[arr[l]] == 1)
                {
                    auto it = mp.find(arr[l]);
                    mp.erase(it);
                }
                else
                {
                    mp[arr[l]]--;
                }
                l++;
            }

            if (mp.size() <= k)
            {
                ans += r - l + 1;
            }
        }

        r++;
    }

    cout << ans;

    return 0;
}