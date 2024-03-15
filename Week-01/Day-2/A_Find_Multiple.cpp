#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = c * 2;
    if (sum > a && sum < b)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}