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

        string s;
        cin >> s;

        char myLast = 'a';
        bool isLost = false;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            char curr = s[i];

            if (curr == 'R')
            {
                if (myLast == 'P')
                {
                    myLast = '-';
                }
                else
                {
                    myLast = 'P';
                    cnt++;
                }
            }
            else if (curr == 'P')
            {

                if (myLast == 'S')
                {
                    myLast = '-';
                }
                else
                {
                    myLast = 'S';
                    cnt++;
                }
            }
            else if (curr == 'S')
            {

                if (myLast == 'R')
                {
                    myLast = '-';
                }
                else
                {
                    myLast = 'R';
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}