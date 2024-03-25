#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        int val = n * m;
        string s = to_string(val);

        // cout << s << endl;

        if (s.size() == 5)
        {
            if (s[0] == '0')
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
            cout << "NO\n";
        }
    }
    return 0;
}