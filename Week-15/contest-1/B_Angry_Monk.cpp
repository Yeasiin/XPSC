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

        priority_queue<int> pq;
        int tmp = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> tmp;
            pq.push(tmp);
        }

        pq.pop();
        // cout << pq.top() << endl;
        ll ans = 0;
        while (!pq.empty())
        {
            int val = pq.top();
            pq.pop();

            if (val == 1)
            {
                ans += 1;
            }
            else
            {
                ans += (val + (val - 1));
            }
        }
        cout << ans << endl;
    }

    return 0;
}