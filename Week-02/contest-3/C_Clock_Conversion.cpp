// https://codeforces.com/contest/1950/problem/C
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, m;

        cin >> h;
        getchar();
        cin >> m;

        int nH;
        int nM;

        bool isAm = true;

        if (h > 11)
        {
            isAm = false;
        }

        if (h == 0)
        {
            h = 12;
        }
        else if (h > 12)
        {
            h = h % 12;
        }

        if (h < 10)
        {
            cout << 0;
        }
        cout << h;
        cout << ":";
        if (m < 10)
        {
            cout << 0;
        }
        cout << m;

        if (isAm)
        {
            cout << " AM" << endl;
        }
        else
        {
            cout << " PM" << endl;
        }
    }
    return 0;
}