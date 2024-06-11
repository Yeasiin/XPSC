#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        int arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll pre[n];

        pre[0] = arr[0];

        for (ll i = 1; i < n; i++)
        {
            pre[i] = arr[i] + pre[i - 1];
        }

        int cnt = 0;
    }
    return 0;
}