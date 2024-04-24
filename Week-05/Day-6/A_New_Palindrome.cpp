#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        map<char, int> mp;
        int strSize = s.size();

        for (int i = 0; i < strSize; i++)
        {
            mp[s[i]]++;
        }

        if (strSize % 2 == 0)
        {
            if (mp.size() >= 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            int cnt = 0;
            int haveOnly = false;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second == 1)
                {
                    haveOnly = true;
                }
                if (it->second % 2 != 0)
                {
                    cnt++;
                }
            }

            if (mp.size() == 2)
            {
                if (haveOnly)
                {
                    cout << "NO\n";
                }
                else
                {
                    cout << "YES\n";
                }
            }
            else
            {
                if (cnt > 1)
                {
                    cout << "NO\n";
                }
                else
                {
                    if (mp.size() >= 2)
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
    }

    return 0;
}