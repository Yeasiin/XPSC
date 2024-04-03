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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int move = 0;
        set<int> st;

        int l = 0;
        int r = n - 1;

        while (l < n)
        {
            int sz = r - l + 1;

            if (sz != mp.size())
            {
                move++;
                if (mp[arr[l]] == 1)
                {
                    auto it = mp.find(arr[l]);
                    mp.erase(it);
                }
                else
                {
                    mp[arr[l]]--;
                }
            }
            else
            {
                break;
            }
            l++;
        }
        cout << move << endl;
    }

    return 0;
}