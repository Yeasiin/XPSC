#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;

        ll car[n];
        priority_queue<ll> pqCar;

        for (ll i = 0; i < n; i++)
        {
            cin >> car[i];
            pqCar.push(car[i]);
        }
        ll outlet[n];
        priority_queue<ll> pqOutlet;
        for (ll i = 0; i < m; i++)
        {
            cin >> outlet[i];
            pqOutlet.push(outlet[i]);
        }

        ll sum = 0;
        while (!pqCar.empty() && !pqOutlet.empty())
        {
            ll wat = pqOutlet.top();
            pqOutlet.pop();
            ll watAfterH = wat * h;

            ll carC = pqCar.top();
            pqCar.pop();

            if (watAfterH > carC)
            {
                sum += carC;
            }
            else
            {
                sum += watAfterH;
            }
        }
        cout << sum << endl;
    }
    return 0;
}