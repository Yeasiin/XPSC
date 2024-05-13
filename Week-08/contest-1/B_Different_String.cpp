#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        map<char, bool> mp;

        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            mp[s[i]] = true;
        }

        if (mp.size() >= 2)
        {
            cout << "YES\n";

            int mid = sz / 2;

            string a;
            string b;
            if (sz % 2 != 0)
            {
                sort(s.begin(), s.end());
                reverse(s.begin(), s.end());
                cout << s << endl;
            }
            else
            {
                sort(s.begin(), s.end());
                a = s.substr(0, mid);
                b = s.substr(mid, sz);
                cout << b << a << endl;
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}