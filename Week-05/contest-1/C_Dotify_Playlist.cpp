#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k, l;
        cin >> n >> k >> l;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int len, lang;
            cin >> len >> lang;
            mp[lang].push_back(len);
        }

        sort(mp[l].begin(), mp[l].end(), greater<int>());

        if (mp[l].size() > 0 && mp[l].size() >= k)
        {
            int cntlen = 0;
            int cnt = 0;
            for (auto it : mp[l])
            {
                cnt++;
                cntlen += it;
                if (cnt == k)
                {
                    break;
                }
            }
            cout << cntlen;
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}