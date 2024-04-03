#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, l, r;
        cin >> n >> l >> r;

        int arr[n];

        int h = 0;
        int mn = 0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            if (arr[i] >= l && arr[i] <= r)
            {
                h++;
                mx = max(mx, h);
            }
            else
            {
                h--;
                mn = min(mn, h);
            }
        }

        cout << mx << " " << mn << endl;
    }

    return 0;
}