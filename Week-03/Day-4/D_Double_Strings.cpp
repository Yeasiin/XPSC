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

        string str[n];
        map<string, bool> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            mp[str[i]] = true;
        }

        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < str[i].length(); j++)
            {
                string pre = str[i].substr(0, j);
                string ere = str[i].substr(j, str[i].length() - j);

                if (mp[pre] && mp[ere])
                {
                    flag = true;
                }
            }
            cout << flag;
        }

        cout << endl;
    }
    return 0;
}