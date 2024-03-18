#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int feq[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            feq[arr[i]]++;
        }
        bool flag = false;
        for (int i = n; i > 0; i--)
        {
            if (feq[i] >= 3)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}