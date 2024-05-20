#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < (n - 1); i++)
        {
            int calculate = abs(arr[i] - arr[i + 1]);
            mn = min(mn, calculate);
        }

        cout << mn << endl;
    }
    return 0;
}