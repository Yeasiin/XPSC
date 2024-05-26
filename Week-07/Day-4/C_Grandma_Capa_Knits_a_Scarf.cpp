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

        string s;
        cin >> s;

        int ans = INT_MAX;

        for (int i = 0; i < 26; i++)
        {

            int cnt = 0;
            bool flag = false;

            for (int l = 0, h = n - 1; l < h;)
            {
                if (s[l] != s[h])
                {
                    if (s[l] == char(i + 97))
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[h] == char(i + 97))
                    {
                        h--;
                        cnt++;
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    l++;
                    h--;
                }
            }

            if (!flag)
            {
                ans = min(ans, cnt);
            }
        }

        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}