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

        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0;

        int k = 1;

        for (int i = 1; i <= n; i++)
        {
            int curr = arr[i];
            if (k <= curr)
            {
                sum += curr - k;
                k = curr + 1;
            }
            else
            {
                k++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}