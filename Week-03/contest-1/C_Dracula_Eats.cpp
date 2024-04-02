#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int cnt = 0;
        if (n - 1 > 0)
        {
            n -= 1;
            cnt++;
        }

        for (int i = 7; i < n; i += 7)
        {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}