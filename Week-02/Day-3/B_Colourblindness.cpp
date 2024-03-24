#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> str[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (str[0][i] == str[1][i])
        {
            continue;
        }
        else if ((str[0][i] == 'B' || str[0][i] == 'G') && (str[1][i] == 'G' || str[1][i] == 'B'))
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}