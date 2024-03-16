#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;
    for (int i = 1; i <= c; i++)
    {
        int mult = c * i;
        if (mult >= a && mult <= b)
        {
            cout << mult << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << -1;

    return 0;
}