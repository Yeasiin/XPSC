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

        string val;
        cin >> val;

        string t(n + 1, '0');

        int ans = 0;
        int r1 = 0;
        int r2 = 0;

        for (int i = 0; i <= n / 2 - 1; i++)
        {
            if (val[i] == val[n - i - 1])
            {
                r2++;
            }
            else
            {
                ans++;
            }
        }

        if (n % 2 == 1)
        {
            r1++;
        }

        for (int i = 0; i <= r2; i++)
        {

            for (int j = 0; j <= r1; j++)
            {
                t[ans + i * 2 + j] = '1';
            }
        }

        cout << t << endl;
    }
    return 0;
}