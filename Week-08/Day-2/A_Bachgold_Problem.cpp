#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int primes[] = {2, 3, 5, 7, 11, 13};

int main()
{
    int n;
    cin >> n;

    vector<int> val;

    int ans = 0;
    int idx = 0;

    while (ans < n)
    {
        if (ans + primes[idx] <= n)
        {
            ans += primes[idx];
            val.push_back(primes[idx]);
        }
        else
        {
            val.pop_back();
            ans -= primes[idx];
            idx++;
        }
    }

    cout << val.size() << endl;

    for (int i : val)
    {
        cout << i << " ";
    }

    // cout << "hello";

    return 0;
}