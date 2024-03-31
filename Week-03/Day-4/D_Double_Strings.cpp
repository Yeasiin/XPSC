#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int numOfString;
        cin >> numOfString;

        string str[numOfString];

        map<string, int> mp;

        for (int i = 1; i <= numOfString; i++)
        {
            cin >> str[i];
            mp[str[i]] = i;
        }

        bool flag = true;

        cout << endl;
    }
    return 0;
}