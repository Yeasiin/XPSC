#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int screenNeed = 0;
        int rest = x;
        if (y > 0)
        {
            screenNeed = ceil((double)y / 2);
            int perScreenCeil = screenNeed * (5 * 3);
            int rest = ((perScreenCeil - (y * ((2 * 2)))));

            if (rest < x)
            {
                int needMore = ceil((double)x / 8);
                screenNeed += needMore;
            }
        }
        else
        {
            int needMore = ceil((double)x / 15);
            screenNeed += needMore;
        }

        // cout << screenNeed << "-- " << rest << endl;

        cout << screenNeed << endl;
    }

    return 0;
}