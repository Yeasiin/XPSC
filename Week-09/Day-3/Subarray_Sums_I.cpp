#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;

    int sum = 0;
    int ll = 0;
    int l = 0;

    while (l < n)
    {

        while (l < n && sum < x)
        {
            sum += arr[l];
            l++;
        }

        while (ll <= l && sum > x)
        {
            sum -= arr[ll];
            ll++;
        }

        if (sum == x)
        {
            cnt++;
            sum -= arr[ll];
            ll++;
        }
    }

    cout << cnt << endl;

    return 0;
}