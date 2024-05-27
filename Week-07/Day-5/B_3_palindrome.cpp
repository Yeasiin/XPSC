#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll n;
    cin >> n;

    string s;

    for (ll i = 0; i < n; i++)
    {
        s += ((i & 2) ? 'a' : 'b');
    }

    cout << s << endl;

    return 0;
}