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

        string s;

        cout << "1";
        s += '1';

        for (int i = 1; i < n; i++)
        {

            if (arr[i] >= arr[i - 1] || arr[i] <= arr[0])
            {
                cout << "1";
                // s += '1';
            }
            else
            {
                cout << "0";
                // s += '0';
            }
        }
        cout << endl;
    }
    return 0;
}