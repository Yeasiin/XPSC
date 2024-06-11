#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string a, b;
        cin >> a >> b;

        cout << b.substr(0, 1) << a.substr(1, 3) << " " << a.substr(0, 1) << b.substr(1, 3) << endl;
    }

    return 0;
}