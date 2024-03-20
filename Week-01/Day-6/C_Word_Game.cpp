#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int score[3] = {0};

        string str[3][n];
        map<string, int> mp[3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string tmp;
                cin >> tmp;
                str[i][j] = tmp;
                mp[i][tmp]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (mp[1][str[0][i]] == 0 && mp[2][str[0][i]] == 0)
            {
                score[0] += 3;
            }
            else if (mp[1][str[0][i]] == 0 || mp[2][str[0][i]] == 0)
            {
                score[0]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (mp[0][str[1][i]] == 0 && mp[2][str[1][i]] == 0)
            {
                score[1] += 3;
            }
            else if (mp[0][str[1][i]] == 0 || mp[2][str[1][i]] == 0)
            {
                score[1]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[0][str[2][i]] == 0 && mp[1][str[2][i]] == 0)
            {
                score[2] += 3;
            }
            else if (mp[0][str[2][i]] == 0 || mp[1][str[2][i]] == 0)
            {
                score[2]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << score[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}