#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int xors = 0;
    int tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        xors ^= tmp;
    }

    return 0;
}