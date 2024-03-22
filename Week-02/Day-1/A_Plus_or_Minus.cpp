#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        char ans;

        if (a + b == c)
        {
            ans = '+';
        }
        else
        {
            ans = '-';
        }
        cout << ans << endl;
    }
    return 0;
}