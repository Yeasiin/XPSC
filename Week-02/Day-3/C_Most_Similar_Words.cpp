#include <bits/stdc++.h>

using namespace std;

int calculate(string strA, string strB)
{
    int sz = strA.size();

    int diff = 0;
    for (int i = 0; i < sz; i++)
    {
        diff += abs((strA[i] - 'a') - (strB[i] - 'a'));
    }
    return diff;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        string str[n];

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int res = calculate(str[i], str[j]);
                ans = min(ans, res);
            }
        }
        cout << ans << endl;
    }

    return 0;
}