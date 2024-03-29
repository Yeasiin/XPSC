// https://codeforces.com/contest/1950/problem/B
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
        bool flag = true;

        int cn = 0;

        int cnt = n;

        while (cnt--)
        {
            bool rev = flag;
            for (int i = 0; i < n; i++)
            {
                if (flag)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
                flag = !flag;
            }
            flag = rev;
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "##";
            }
            cout << endl;
        }
    }

    return 0;
}