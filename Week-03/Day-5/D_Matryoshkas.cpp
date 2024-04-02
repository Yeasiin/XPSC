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

        map<int, int> mp;

        int tmp;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            arr[i] = tmp;
            mp[tmp]++;
        }

        int mn = INT_MAX;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            mn = min(mn, it->second);
        }

        sort(arr, arr + n);

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (mp[arr[i]] > 0)
            {
                int curr = arr[i];

                while (true)
                {
                    if (mp[curr] > 0)
                    {
                        mp[curr]--;
                        curr++;
                    }
                    else
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}