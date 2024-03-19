#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {

        long long a, b, c;
        cin >> a >> b >> c;

        long long tentNeed = 0;

        tentNeed += a;
        a = 0;

        int mod = b % 3;

        int bRest = b - mod;
        int bTentNeed = bRest / 3;

        tentNeed += bTentNeed;
        if (mod > 0)
        {
            long long need = 3 - mod;
            c -= need;
            tentNeed += 1;
        }

        bool flag = true;

        if (c < 0)
        {
            flag = false;
        }

        mod = c % 3;
        int cRest = c - mod;
        int cTentNeed = cRest / 3;

        tentNeed += cTentNeed;

        if (mod > 0)
        {
            tentNeed += 1;
        }

        if (flag)
        {

            cout << tentNeed << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}