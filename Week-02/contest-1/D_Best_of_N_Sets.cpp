#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;

        cin >> n >> m;
        int z = abs(n - m) - 1;

        cout << n + m + z << endl;
    }
    return 0;
}