#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, y, z;
        cin >> x >> y >> z;

        int min = x * y;

        int mintInDay = 60 * 24 * z;

        if (mintInDay >= min)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}