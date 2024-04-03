#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    stack<string> stk;

    for (int i = 0; i < n; i++)
    {
        stk.push(str[i]);
    }

    map<string, bool> mp;

    while (!stk.empty())
    {
        string value = stk.top();

        if (!mp[value])
        {
            mp[value] = true;
            cout << value.substr(value.size() - 2, 2) << "";
        }
        stk.pop();
    }

    return 0;
}