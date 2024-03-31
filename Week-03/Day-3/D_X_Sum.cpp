#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n, m;
int sum = 0;

vector<pair<int, int>> d = {
    {-1, -1},
    {-1, 1},
    {1, -1},
    {1, 1}};

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < m;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        sum = 0;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        vector<vector<int>> resArr(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                sum += arr[i][j];
                for (int k = 0; k < d.size(); k++)
                {
                    int ci = d[k].first + i;
                    int cj = d[k].second + j;

                    while (isValid(ci, cj))
                    {
                        sum += arr[ci][cj];
                        ci = d[k].first + ci;
                        cj = d[k].second + cj;
                    }
                }

                ans = max(ans, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}