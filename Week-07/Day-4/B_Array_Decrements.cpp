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

        int a[n];
        int b[n];

        pair<int, int> bMin = {-1, INT_MAX};
        pair<int, int> aMax = {-1, INT_MIN};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= aMax.second)
            {
                aMax = {i, a[i]};
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (bMin.second > b[i] && b[i] != 0)
            {
                bMin = {i, b[i]};
            }
        }

        bool isPossible = true;

        int zeroDiff = -1;
        int diff = -1;

        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                isPossible = false;
                break;
            }

            if (b[i] == 0)
            {
                zeroDiff = max(zeroDiff, a[i] - b[i]);
            }
            else
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {

                    if (a[i] - b[i] != diff)
                    {
                        isPossible = false;
                        break;
                    }
                }
            }
        }

        if (!isPossible)
        {
            cout << "NO\n";
        }
        else
        {

            if (diff == -1 || zeroDiff <= diff)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}