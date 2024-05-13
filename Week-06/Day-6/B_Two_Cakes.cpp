#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int n, a, b;
    cin >> n >> a >> b;

    for (int i = min(a, b); i > 0; i--)
    {
        int p = a / i;
        int q = b / i;

        if (p + q >= n)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}