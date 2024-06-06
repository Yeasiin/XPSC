#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {

        int str;
        cin >> str;

        for (int i = 2; i <= sqrt(str); i++)
        {

            if (str % i == 0)
            {
                mp[i]++;

                while (str % i == 0)
                {
                    str /= i;
                }
            }
        }

        if (str > 1)
        {
            mp[str]++;
        }
    }

    int ans = 1;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans = max(ans, (*it).second);
    }
    cout << ans << endl;

    return 0;
}