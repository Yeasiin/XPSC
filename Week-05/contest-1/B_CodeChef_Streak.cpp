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

        int tmp;
        int o = 0;
        int oo = 0;
        int a = 0;
        int aa = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> tmp;
            oo++;

            if (tmp == 0)
            {
                oo = 0;
            }

            o = max(o, oo);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> tmp;

            aa++;

            if (tmp == 0)
            {
                aa = 0;
            }

            a = max(a, aa);
        }

        if (o == a)
        {
            cout << "Draw";
        }
        else if (o > a)
        {
            cout << "Om";
        }
        else
        {
            cout << "Addy";
        }
        cout << endl;

        // cout << o << " -" << a << endl;
    }
    return 0;
}