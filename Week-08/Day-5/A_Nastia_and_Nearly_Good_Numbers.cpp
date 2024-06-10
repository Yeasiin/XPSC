#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a << " " << a * (ll)b << " " << a * (ll)(b + 1) << endl;
        }
    }

    return 0;
}