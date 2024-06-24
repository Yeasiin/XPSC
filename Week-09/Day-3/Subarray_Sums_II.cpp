#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll pre_sum = 0;
    ll ans = 0;
    map<ll, int> sums;
    sums[0] = 1;

    for (auto i : arr)
    {
        pre_sum += i;

        ans += sums[pre_sum - x];
        sums[pre_sum]++;
    }
    cout << ans << endl;

    return 0;
}