#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll r, c;
        cin >> r >> c;

        if (c > r)
        {
            if (c % 2 != 0)
            {
                cout << c * c - r + 1;
            }
            else
            {
                c--;
                cout << c * c + r;
            }
        }
        else
        {

            if (r % 2 == 0)
            {
                cout << r * r - c + 1;
            }
            else
            {

                r--;
                cout << r * r + c;
            }
        }
        cout << endl;
    }
    return 0;
}