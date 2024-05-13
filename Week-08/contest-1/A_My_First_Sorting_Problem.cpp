#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int arr[2];

        for (int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 2);

        for (auto i : arr)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}