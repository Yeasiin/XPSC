#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e6 + 10;

vector<int> seive()
{
    vector<bool> isPrime(N + 10, true);

    for (int i = 2; (i * i) <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    vector<int> prime;

    for (int i = 0; i <= N; i++)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
        }
    }
    return prime;
}

int main()
{

    int t;
    cin >> t;

    vector<int> prime = seive();

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {

            int val = arr[i];

            int start = 2;

            while (val > 1)
            {

                if (val % prime[start] == 0)
                {
                    val /= prime[start];
                    mp[prime[start]]++;
                }
                else
                {
                    start++;
                }
            }
        }

        bool flag = true;

        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
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