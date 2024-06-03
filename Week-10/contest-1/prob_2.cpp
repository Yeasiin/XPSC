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

        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll sum = 0;
        ll cnt = 0;

        if (arr[0] % 2 == 0)
        {
            cnt++;
            sum += arr[0];
        }

        cout << cnt << endl;
    }

    return 0;
}