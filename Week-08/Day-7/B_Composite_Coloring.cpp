#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int prime[] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
    };

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

        int ans[n];

        for (int i = 0; i < n; i++)
            ans[i] = -1;

        int curr = 1;

        for (int p : prime)
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != -1)
                {
                    continue;
                }

                if (arr[i] % p)
                {
                    continue;
                }

                flag = true;
                ans[i] = curr;
            }
            if (flag)
            {
                curr++;
            }
        }
        cout << curr - 1 << endl;
        for (int e : ans)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}