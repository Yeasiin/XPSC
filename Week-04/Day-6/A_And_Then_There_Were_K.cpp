#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int ans = 0;

        int val = 1;
        for (int i = 0; i < n; i++)
        {
            val = val << 1;

            if (val <= n)
            {
                ans = val - 1;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}