#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b, c;
        cin >> a >> b >> c;

        ll cnt = 0;
        while (ceil((float(b) / c)) > a)
        {
            b = ceil(float(b) / c);
            cnt++;
        }

        cnt += (b - a);

        // cout << a << " " << b << " " << c;

        cout << cnt << endl;
    }
    return 0;
}