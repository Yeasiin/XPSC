#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    string s;
    cin >> s;

    ll have[3];
    for (ll i = 0; i < 3; i++)
    {
        cin >> have[i];
    }

    ll cost[3];

    for (ll i = 0; i < 3; i++)
    {
        cin >> cost[i];
    }

    ll r;
    cin >> r;

    ll totalCast = 0;
    map<char, bool> mp;

    for (ll i = 0; i < s.size(); i++)
    {
        mp[s[i]] = true;

        if (s[i] == 'B')
        {
            totalCast += cost[0];
        }
        else if (s[i] == 'S')
        {
            totalCast += cost[1];
        }
        else if (s[i] == 'C')
        {
            totalCast += cost[2];
        }
    }

    ll haveTotal = r;

    if (mp['B'])
    {
        haveTotal += (cost[0] * have[0]);
    }
    if (mp['S'])
    {
        haveTotal += (cost[1] * have[1]);
    }
    if (mp['C'])
    {
        haveTotal += (cost[2] * have[2]);
    }

    cout << (haveTotal / totalCast) << endl;

    return 0;
}