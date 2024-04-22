#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int closest_left(int arr[], int sz, int val)
{

    int idx = -1;

    int l = 0;
    int r = sz - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] <= val)
        {
            idx = mid + 1;
            l = mid + 1;
        }
        else if (arr[mid] > val)
        {
            r = mid - 1;
        }
        else if (arr[mid] < val)
        {
            l = mid + 1;
        }
    }
    return idx;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;

        int ans = closest_left(arr, n, q);

        if (ans == -1)
        {
            cout << 0;
        }
        else
        {
            cout << ans;
        }
        cout << endl;
    }

    return 0;
}