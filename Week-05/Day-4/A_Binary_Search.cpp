#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool binary_search(int arr[], int sz, int val)
{

    int l = 0;
    int r = sz - 1;

    bool flag = false;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        if (val == arr[mid])
        {
            flag = true;
            break;
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
    return flag;
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

        if (binary_search(arr, n, q))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}