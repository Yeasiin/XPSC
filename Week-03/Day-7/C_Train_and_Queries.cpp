#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        getchar();
        int n, k;
        cin >> n >> k;

        int arr[n];

        map<int, vector<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]].push_back(i);
        }

        for (int x = 0; x < k; x++)
        {
            int i, j;
            cin >> i >> j;

            if (mp[i].size() == 0 || mp[j].size() == 0)
            {
                cout << "NO\n";
            }
            else
            {
                if (mp[i][0] < mp[j][mp[j].size() - 1])
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}