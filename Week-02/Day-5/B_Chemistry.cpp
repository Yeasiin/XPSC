#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int _k = k;

        string str;
        cin >> str;
        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (k == 0)
                break;

            if (it->second % 2 != 0)
            {
                k--;
                it->second--;
            }
        }

        while (k != 0)
        {
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (k == 0)
                    break;

                if (k > 1)
                {
                    it->second -= 2;
                    k -= 2;
                }
                else
                {
                    it->second -= 1;
                    k -= 1;
                }
            }
        }

        bool isFinalWordOdd = (n - _k) % 2 != 0;
        int oddCnt = 0;

        int flag = false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                oddCnt++;
            }
            if (it->second < 0)
            {
                flag = true;
            }
        }

        if ((!isFinalWordOdd && oddCnt == 0) || isFinalWordOdd && oddCnt == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}