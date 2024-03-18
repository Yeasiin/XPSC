#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, s;
        cin >> n >> s;

        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == s)
        {
            cout << 0 << endl;
            continue;
        }
        int toRemove = sum - s;
        int i = 0;
        int j = n - 1;
        int d = 0;
    }
    return 0;
}