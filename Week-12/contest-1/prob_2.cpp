#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int for2 = 0;
        int for3 = 0;

        int flag = 2;

        while (flag <= n)
        {
            for2 += flag;
            flag += 2;
        }

        flag = 3;

        while (flag <= n)
        {
            for3 += flag;
            flag += 3;
        }

        if (for2 > for3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }

        // cout << for2 << "--" << for3 << endl;
    }
    return 0;
}