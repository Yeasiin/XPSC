#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin >> n;

    stack<char> stk;
    int diff = 0;
    char tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;

        if (tmp == '(')
        {
            stk.push(tmp);
        }
        else
        {
            if (!stk.empty())
            {

                stk.pop();
            }
        }
    }

    cout << stk.size() << endl;
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