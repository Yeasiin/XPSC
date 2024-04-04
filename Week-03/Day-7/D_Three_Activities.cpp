#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        pair<int, int> arr[3][n];
        int tmp;
        for (int k = 0; k < 3; k++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> tmp;
                arr[k][i] = {tmp, i};
            }
        }

        for (int i = 0; i < 3; i++)
        {
            sort(arr[i], arr[i] + n, comp);
        }

        int ans = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    auto aArr = arr[0][i];
                    auto bArr = arr[1][j];
                    auto cArr = arr[2][k];

                    if ((aArr.second != bArr.second && aArr.second != cArr.second) && bArr.second != cArr.second)
                    {
                        ans = max(ans, (aArr.first + bArr.first + cArr.first));
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}