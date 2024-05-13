#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int comp(int str, string a, string b)
{
    int diff = 0;
    int sz = b.size();

    for (int i = str; i < sz; i++)
    {
        // int aVal = int(a[i]) - 48;
        // int bVal = int(b[sz - i]) - 48;

        // int val1 = abs(aVal - bVal);
        // int val2 = ((min(aVal, bVal) + 10) - max(aVal, bVal));
        // diff += min(val1, val2);

        cout << a[i] << " " << b[sz - i] << endl;
    }
    return diff;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        string as, bs;
        cin >> as >> bs;

        int ans = INT_MAX;

        for (int i = 0; i < a; i++)
        {

            ans = min(ans, comp(i, as, bs));
            cout << endl;
        }
        // cout << ans << endl;
    }

    return 0;
}