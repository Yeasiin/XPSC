#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> parr;
        vector<int> narr;

        ll tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;

            if (tmp > 0)
                parr.push_back(tmp);

            if (tmp < 0)
                narr.push_back(-tmp);
        }

        sort(parr.begin(), parr.end(), greater<int>());
        sort(narr.begin(), narr.end(), greater<int>());

        ll ans = 0;

        if (narr.size() == 0)
        {
            if (parr.size() != 0)
            {
                for (int i = 0; i < parr.size(); i += k)
                {
                    ans += parr[i] * 2;
                }

                ans -= parr[0];
            }
        }
        else if (parr.size() == 0)
        {

            for (int i = 0; i < narr.size(); i += k)
            {
                ans += narr[i] * 2;
            }

            ans -= narr[0];
        }
        else
        {
            for (int i = 0; i < parr.size(); i += k)
            {
                ans += parr[i] * 2;
            }
            for (int i = 0; i < narr.size(); i += k)
            {
                ans += narr[i] * 2;
            }

            ans -= max(narr[0], parr[0]);
        }
        cout << ans << endl;
    }

    return 0;
}