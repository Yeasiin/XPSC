#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long sum = 0;

    for (long long i = 1; i <= x; i++)
    {

        if (x >= x && x <= y)
        {
            sum++;
        }
        x *= 2;
    }

    cout << sum;

    return 0;
}