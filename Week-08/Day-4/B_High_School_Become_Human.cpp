#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 1)
    {
        cout << "=";
    }
    else if (a == 1)
    {
        cout << "<";
    }
    else if (b == 1)
    {
        cout << ">";
    }
    else
    {

        double aa = a * log(b);
        double bb = b * log(a);

        if (aa < bb)
        {
            cout << ">";
        }
        else if (aa > bb)
        {
            cout << "<";
        }
        else
        {
            cout << "=";
        }
    }

    return 0;
}