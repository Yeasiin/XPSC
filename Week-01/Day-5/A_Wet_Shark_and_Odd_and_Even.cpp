#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << "\n";
    }
    else
    {
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {

            long long tmp = sum - arr[i];
            if (tmp % 2 == 0)
            {
                cout << tmp << "\n";
                break;
            }
        }
    }

    return 0;
}