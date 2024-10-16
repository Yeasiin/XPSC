#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);

        for (int i = 0; i < 5; i++)
        {
            int val = pq.top();
            pq.pop();
            val++;
            pq.push(val);
        }

        int na = pq.top();
        pq.pop();

        int nb = pq.top();
        pq.pop();

        int nc = pq.top();
        pq.pop();

        cout << na * nb * nc << endl;
        // cout << na << " " << nb << " " << nc << endl;
    }

    return 0;
}