#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int n, m, k;
    cin >> n >> m >> k;

    int arr[m + 1];

    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> mask;

    for (int i = 0; i <= m; i++)
    {
        vector<int> v;

        for (int j = 0; j < n; j++)
        {
            if ((arr[i] >> j) & 1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        mask.push_back(v);
    }

    int ans = 0;

    vector<int> fedor_mask = mask[m];

    for (int i = 0; i < mask.size() - 1; i++)
    {
        vector<int> curr = mask[i];

        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (fedor_mask[j] != curr[j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}