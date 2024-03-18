#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        char c;

        int sum1 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> c;
            sum1 += c - '0';
        }
        int sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> c;
            sum2 += c - '0';
        }
        if (sum1 == sum2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}