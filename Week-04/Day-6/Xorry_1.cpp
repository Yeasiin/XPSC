#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int a = 0, b = 0;

        int heightbit = 31 - __builtin_clz(x);
        b = 1 << heightbit;

        a = x ^ b;

        cout << a << " " << b << "\n";
    }
    return 0;
}