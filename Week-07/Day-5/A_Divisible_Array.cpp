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

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
            sum += i;
        }

        int more = sum % n;

        arr[1] = (arr[1] += more);

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}