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

        int mn = -1;
        int mx = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            mx = mx | arr[i];
            mn = mn & arr[i];
        }

        cout << mx - mn << endl;

        // cout << mx << " " << mn;
    }
    return 0;
}