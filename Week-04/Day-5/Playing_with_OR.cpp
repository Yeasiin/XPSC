#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int k, n;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int l = 0;
        int r = 0;

        int ans = 0;

        int cnt = 0;
        while (r < n)
        {
            int len = r - l + 1;

            // ans |= arr[r];

            if (len == k)
            {
                for (int i = l; i <= r; i++)
                {
                    if (arr[i] % 2 != 0)
                    {
                        cnt++;
                        break;
                    }
                }

                l++;
            }

            r++;
        }

        cout << cnt << endl;
    }

    return 0;
}