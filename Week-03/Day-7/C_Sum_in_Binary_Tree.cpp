#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll sum = n;

        while (n > 0)
        {
            n = n / 2;
            sum += n;
        }
        cout << sum << endl;
    }

    return 0;
}