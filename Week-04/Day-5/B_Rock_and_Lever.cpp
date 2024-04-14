#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            mp[__lg(arr[i])]++;
        }
        ll ans = 0;

        for (auto [x, y] : mp)
        {
            ans += ((ll)(y * ((ll)y - 1)) / 2);
        }
        cout << ans;

        cout << "\n";
    }
    return 0;
}