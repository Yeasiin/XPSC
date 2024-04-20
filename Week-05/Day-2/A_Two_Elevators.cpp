#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        int cn = abs(b - c);

        int bb = c - 1;

        int nb = cn + bb;

        int aa = a - 1;

        if (aa == nb)
        {
            cout << 3;
        }
        else if (aa > nb)
        {
            cout << 2;
        }
        else
        {
            cout << 1;
        }

        cout << endl;
    }
    return 0;
}