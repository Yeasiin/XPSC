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

        ll ans = -1;
        ll tmp;

        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            ans &= tmp;
        }

        cout << ans << endl;
    }
    return 0;
}