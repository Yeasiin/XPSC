#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int revInt(int val)
{
    return -val;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int tmp;
        int haveMinus = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                haveMinus++;
                arr[i] *= -1;
            }
        }

        sort(arr, arr + n);

        ll val = 0;

        if (haveMinus % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                val += arr[i];
            }
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                val += arr[i];
            }
            val -= arr[0];
        }

        cout << val << endl;
    }

    return 0;
}