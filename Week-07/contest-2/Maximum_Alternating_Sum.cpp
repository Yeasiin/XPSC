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

        int sum = arr[0];

        bool flag;

        if (n % 2 == 0)
        {
            flag = true;
        }
        else
        {
            sort(arr, arr + n);
            flag = false;
        }

        cout << sum << endl;
    }

    return 0;
}