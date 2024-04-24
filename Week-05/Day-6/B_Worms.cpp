#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int bSearch(int arr[], int sz, int val)
{

    int idx = -1;

    int l = 0;
    int r = sz - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] >= val)
        {
            idx = mid + 1;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return idx;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pre_sum[n];
    pre_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }

    sort(arr, arr + n);

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int tmp;
        cin >> tmp;

        // auto low = lower_bound(pre_sum, pre_sum + n, tmp);
        // cout << (low - pre_sum) + 1 << "\n";

        cout << bSearch(pre_sum, n, tmp) << endl;
    }

    return 0;
}