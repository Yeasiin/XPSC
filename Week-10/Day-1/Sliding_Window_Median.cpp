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
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pbds<pair<int, int>> pb;

    int l = 0, r = 0;

    while (r < n)
    {

        pb.insert({arr[r], r});
        r++;

        if (r - l == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }

            cout << pb.find_by_order(pos)->first << " ";

            pb.erase({arr[l], l});
            l++;
        }
    }

    return 0;
}