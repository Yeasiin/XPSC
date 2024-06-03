#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{

    ll n, a, b, p, q;

    cin >> n >> a >> b >> p >> q;

    ll ans = 0;

    ans += ((n / a) * p);
    ans += ((n / b) * q);

    ll doubleCnted = (n / lcm(a, b)) * min(p, q);

    cout
        << ans - doubleCnted << endl;

    return 0;
}