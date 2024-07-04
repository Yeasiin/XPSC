#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;

int main()
{

    int n, m;
    cin >> n >> m;

    pbds<int> pb;

    for (int i = 1; i <= n; i++)
    {
        int tm;
        cin >> tm;
        pb.insert(tm);
    }

    for (int i = 1; i <= m; i++)
    {
        int tmp;
        cin >> tmp;
        cout << pb.order_of_key((tmp + 1)) << " ";
    }

    return 0;
}