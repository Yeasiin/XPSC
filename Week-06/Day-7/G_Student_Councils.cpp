#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int k, n;
    cin >> k >> n;

    int arr[n];

    ll val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        val += arr[i];
    }

    cout << val / k << endl;

    return 0;
}