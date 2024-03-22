#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string ori = "Timur";

    map<char, int> mp;
    for (int i = 0; i < ori.size(); i++)
    {
        mp[ori[i]]++;
    }

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> mp1;
        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]++;
        }

        bool flag = true;

        for (auto it = mp1.begin(); it != mp1.end(); it++)
        {
            if (mp1[it->first] != mp[it->first])
            {
                flag = false;
            }
        }
        if (flag)
        {
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (mp1[it->first] != mp[it->first])
                {
                    flag = false;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}