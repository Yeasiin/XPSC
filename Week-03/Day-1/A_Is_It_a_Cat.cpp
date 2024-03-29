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
        int n;
        cin >> n;

        char tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            s += (char)tolower(tmp);
        }

        s.erase(
            unique(s.begin(), s.end()),
            s.end());

        if (s == "meow")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}