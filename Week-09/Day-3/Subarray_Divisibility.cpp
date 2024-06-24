#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = 0;
    ll sum = 0;

    map<ll, int> seen;

    seen[0]++;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i] % n;
        sum = (sum + n) % n;
        cnt += seen[sum];
        seen[sum]++;
    }

    cout << cnt << endl;

    return 0;
}