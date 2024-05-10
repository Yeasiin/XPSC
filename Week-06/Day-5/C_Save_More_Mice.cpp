#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int x, n;
        cin >> x >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());

        int cat_pos = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cat_pos < arr[i])
            {
                cat_pos += (x - arr[i]);
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}