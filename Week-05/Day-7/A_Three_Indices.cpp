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

        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;

        for (int i = 2; i <= n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                flag = true;
                cout << "YES\n";
                cout << (i - 1) << " " << i << " " << (i + 1) << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO\n";
        }
    }
    return 0;
}