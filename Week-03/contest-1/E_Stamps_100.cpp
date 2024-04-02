#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        string str;
        cin >> str;

        ll firstIndex = n;
        for (ll i = 0; i < n - 1; i++)
        {
            if (str[i] == '1')
            {
                str[i + 1] = '0';
                str[i + 2] = '0';
                // firstIndex = i;
                // break;
            }
        }

        // for (ll i = firstIndex + 1; i < n; i++)
        // {
        //     str[i] = '0';
        // }
        cout << str << endl;
    }

    return 0;
}