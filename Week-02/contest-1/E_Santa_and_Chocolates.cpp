#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int total = 0;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }
        int dist = (total / n);
        if (dist >= 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}