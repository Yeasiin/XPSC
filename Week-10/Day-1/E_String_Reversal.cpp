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
    int n;
    cin >> n;

    string s;
    cin >> s;

    string rs = s;

    reverse(rs.begin(), rs.end());

    map<char, vector<int>> pos_s, pos_rs;

    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_rs[rs[i]].push_back(i);
    }

    vector<int> premutation(n);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            premutation[pos_rs[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<int> pb;

    ll ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        ans += pb.order_of_key(premutation[i]);
        pb.insert(premutation[i]);
    }

    cout << ans << endl;

    return 0;
}