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

        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }

        cout << mx - mn << endl;
    }

    return 0;
}