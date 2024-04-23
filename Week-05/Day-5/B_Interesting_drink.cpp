#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int fun(int arr[], int sz, int val)
{

    int l = 0;
    int r = sz - 1;

    int idx = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <= val)
        {
            idx = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return idx + 1;
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

    sort(arr, arr + n);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int coin;
        cin >> coin;

        cout << fun(arr, n, coin) << endl;
    }

    return 0;
}