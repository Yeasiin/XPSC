#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int a = 0, b = 0;

        int diff = INT_MAX;

        for (int i = x - 1; i >= 0; i--)
        {
            int calcB = (x ^ i);
            if (calcB >= x)
                continue;

            if ((i ^ calcB) == x)
            {
                a = i;
                b = calcB;
                break;
            }
        }

         
    }
    return 0;
}