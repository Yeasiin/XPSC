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

        ll arr[n];
        ll sum = 0;
        ll tmp;

        priority_queue<ll, vector<ll>> pq;

        for (ll i = 0; i < n; i++)
        {
            cin >> tmp;

            if (tmp > 0)
            {
                pq.push(tmp);
            }
            else
            {
                if (!pq.empty())
                {
                    sum += pq.top();
                    pq.pop();
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}