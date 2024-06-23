#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    int l = 1;
    int r = 5;

    vector<int> v;

    for (int i = 2; i <= n; i += 2)
    {
        v.push_back(i);
    }
    for (int i = 1; i <= n; i += 2)
    {
        v.push_back(i);
    }

    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        for (int i : v)
            cout << i << " ";
    }

    return 0;
}