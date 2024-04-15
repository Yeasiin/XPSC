#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        for (int each : arr)
        {
            ans ^= each;
        }
        if (n % 2 != 0)
        {
            cout << ans;
        }
        else
        {
            if (ans == 0)
            {
                cout << arr[n - 1];
            }
            else
            {
                cout << -1;
            }
        }

        cout << "\n";
    }
    return 0;
}