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

        int ar[n];
        int br[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> br[i];
        }

        sort(ar, ar + n);
        sort(br, br + n);

        bool flag = true;

        for (int i = n - 1; i >= 0; i--)
        {
            if (ar[i] > br[i] || br[i] - ar[i] > 1)
            {
                flag = false;
                break;
            }
        }

        if (flag)
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