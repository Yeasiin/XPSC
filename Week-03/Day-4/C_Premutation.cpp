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

        vector<vector<int>> mtrx(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mtrx[i][j];
            }
        }

        map<int, int> mp1;
        map<int, int> mp2;

        for (int i = 0; i < n; i++)
        {
            mp1[mtrx[i][n - 2]] = i;
            mp2[mtrx[i][n - 2]]++;
        }

        int indexOfAlmostPre = 0;
        int lastValue = 0;
        for (auto a : mp2)
        {
            if (a.second == 1)
            {
                indexOfAlmostPre = mp1[a.first];
            }
            else
            {
                lastValue = a.first;
            }
        }

        for (int value : mtrx[indexOfAlmostPre])
        {
            cout << value << " ";
        }
        cout << lastValue;

        cout << endl;
    }
    return 0;
}