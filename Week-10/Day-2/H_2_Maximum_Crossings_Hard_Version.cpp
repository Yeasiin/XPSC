#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;

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

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pbds<ll> pb;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            pb.insert(arr[i]);
            cnt += (pb.size() - 1) - pb.order_of_key(arr[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}