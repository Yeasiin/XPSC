#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int mx = INT_MIN;
        int cnt = -1;

        int step = 0;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > cnt)
            {
                cnt = it->second;
                mx = it->first;
            }
        }

        if (cnt == n)
        {
            cout << step << endl;
        }
        else
        {

            int need = n - cnt;
            for (int i = 0; i < n; i++)
            {
                if (cnt >= n)
                    break;

                step++;
                if (cnt > need)
                {
                    step += need;
                }
                else
                {
                    step += cnt;
                }
                need -= cnt;
                cnt *= 2;
            }

            cout << step << endl;
        }
    }
    return 0;
}