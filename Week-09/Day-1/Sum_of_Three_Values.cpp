#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    pair<ll, int> arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {

        ll moreNeed = (ll)k - arr[i].first;

        int r = n - 1;
        for (int l = i + 1; l < r; l++)
        {
            while (l + 1 < r && arr[l].first + arr[r].first > moreNeed)
            {
                r--;
            }

            if (arr[l].first + arr[r].first == moreNeed)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << "\n";
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}