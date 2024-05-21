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
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {

                if (mp['1'] == 0)
                    break;

                mp['1']--;
            }
            else
            {
                // 1
                if (mp['0'] == 0)
                    break;

                mp['0']--;
            }
        }

        cout << mp['0'] + mp['1'] << endl;
    }
    return 0;
}