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

        int arr[n + 2];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        bool ok = true;

        for (int i = 1; i <= n; i++)
        {

            bool found = false;

            for (int j = i + 1; j >= 2; j--)
            {

                if (arr[i] % j)
                {
                    found = true;
                    break;
                }
            }
            ok &= found;
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}