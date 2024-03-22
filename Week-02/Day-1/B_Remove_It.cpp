#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp != x)
            v.push_back(tmp);
    }

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}