#include <bits/stdc++.h>

using namespace std;

bool ans = true;

void isPali(int arr[], int sz, int x)
{

    int m = 0;
    int brr[sz + 50];
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] != x)
            brr[m++] = arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (brr[i] != brr[m - 1 - i])
        {
            return;
        }
    }
    ans = true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        ans = true;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - 1 - i])
            {
                ans = false;
                isPali(arr, n, arr[i]);
                isPali(arr, n, arr[n - 1 - i]);
                break;
            }
        }

        ans ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}