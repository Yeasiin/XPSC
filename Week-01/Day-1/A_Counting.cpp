#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    if (n1 < n2)
    {
        cout << (n2 - n1) + 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}