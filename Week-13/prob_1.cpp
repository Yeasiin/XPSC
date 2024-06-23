#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int arr[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 3);

        int ans = 0;

        ans += abs(arr[0] - arr[1]);
        ans += abs(arr[1] - arr[2]);

        cout << ans << endl;
    }

    return 0;
}