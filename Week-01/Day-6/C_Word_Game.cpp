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

        string str[3][n];

        map<string, int> mp1;
        map<string, int> mp2;
        map<string, int> mp3;

        for (int k = 0; k < 3; k++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> str[k][i];
            }
        }

        int score[3] = {0};

        for (int i = 0; i < 3; i++)
        {
            cout << score[i] << " ";
        }

        cout << "hello";
    }

    return 0;
}