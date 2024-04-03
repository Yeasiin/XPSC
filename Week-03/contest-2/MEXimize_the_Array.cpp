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

        int mn = 0;
        int mx = 0;
        int arr[n];

        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = true;
            mn = min(arr[i], mn);
            mx = max(arr[i], mx);
        }

        int step = (mx - mn) - 1;

        if (mp[step])
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (mx - mn) - 1 << endl;
        }
    }
    return 0;
}