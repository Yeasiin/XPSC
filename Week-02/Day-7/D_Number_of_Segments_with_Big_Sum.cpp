// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll n, s;
    cin >> n >> s;

    ll arr[n + 5];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    ll sum = 0;
    ll r = 0;
    ll l = 0;

    int k = 0;

    while (r < n)
    {
        sum += arr[r];

        while (sum - arr[l] >= s)
        {
            sum -= arr[l];
            l++;
        }

        if (sum >= s)
        {
            ans += l + 1;
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}