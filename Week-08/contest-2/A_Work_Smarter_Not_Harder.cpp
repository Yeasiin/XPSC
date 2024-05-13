#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int l, v1, v2;
        cin >> l >> v1 >> v2;

        int time1 = int(ceil((double)l / v1));
        int time2 = int(ceil((double)l / v2));

        // cout << time1 << time2 << endl;
        if (time1 > time2)
        {
            cout << (time1 - time2) - 1;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}