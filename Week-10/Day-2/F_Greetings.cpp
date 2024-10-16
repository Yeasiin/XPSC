#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    pbds<int> pb;

    while (t--)
    {

        int n;
        cin >> n;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            cin >> v[i].second;
        }

        sort(v.begin(), v.end());

        ll ans = 0;

        pb.clear();

        for (auto e : v)
        {
            ans += pb.size() - pb.order_of_key(e.second);
            pb.insert(e.second);
        }

        cout << ans << endl;
    }

    return 0;
}