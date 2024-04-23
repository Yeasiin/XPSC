#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int lesser(int arr[], int sz, int val)
{
    int l = 0;
    int r = sz - 1;

    int idx = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] >= val)
        {
            idx = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return idx;
}
int greaterX(int arr[], int sz, int val)
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
        else if (arr[mid] < val)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
    sort(arr, arr + n);

    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;

        int ll = lesser(arr, n, l);
        int rr = greaterX(arr, n, r);

        if (rr == -1 || ll == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << rr - ll + 1 << " ";
        }
    }

    return 0;
}