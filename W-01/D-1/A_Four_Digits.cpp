#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    int len = n.size();

    int need = 4 - len;

    for (int i = 0; i < need; i++)
    {
        cout << 0;
    }
    cout << n;

    return 0;
}