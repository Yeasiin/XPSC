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

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
        }

        int l = 0;
        int r = n - 1;

        ll cnt = 0;

        while (l < n)
        {
            if (arr[l] < 0)
            {
                cnt++;
                while (arr[l] <= 0)
                {
                    l++;
                }
            }
            else
            {
                while (arr[l] >= 0)
                {
                    l++;
                }
            }
        }

        cout << sum << " " << cnt << endl;
    }
    return 0;
}
