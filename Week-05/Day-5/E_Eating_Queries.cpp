#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int fun(int arr[], int sz, int val)
{

    int l = 0;
    int r = sz - 1;

    int idx = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if ((arr[sz - 1] - arr[mid]) >= val)
        {
            idx = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (arr[sz - 1] < val)
    {
        return -1;
    }

    return sz - idx;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int pre_sum[n];

        pre_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + arr[i];
        }

        for (int i = 0; i < q; i++)
        {
            int tmp;
            cin >> tmp;

            cout << fun(pre_sum, n, tmp) << endl;
        }
    }
    return 0;
}