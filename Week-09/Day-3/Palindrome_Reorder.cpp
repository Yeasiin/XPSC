#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    string s;
    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    char mid;
    int flag = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        if (it->second % 2 != 0)
        {
            flag += 1;
            mid = it->first;
            mp[it->first]--;
        }
    }

    vector<char> v1;
    vector<char> v2;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        while (it->second > 0)
        {

            v1.push_back(it->first);
            v2.push_back(it->first);
            mp[it->first] -= 2;
        }
    }

    // cout << flag << " --";

    if (flag > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {

        for (auto c : v1)
        {
            cout << c;
        }
        if (flag)
        {
            cout << mid;
        }

        reverse(v2.begin(), v2.end());
        for (auto c : v2)
        {
            cout << c;
        }
    }

    return 0;
}