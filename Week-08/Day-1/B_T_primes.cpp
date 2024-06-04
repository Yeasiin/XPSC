#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll N = 1e6 + 5;

bool isPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

map<int, bool> seive()
{
    vector<bool> isPrime(N, true);

    for (int i = 2; i * 2 <= N; i++)
    {
        if (isPrime[i])
        {

            for (int j = i + i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    map<int, bool> mp;

    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            mp[i] = true;
        }
    }

    return mp;
}

bool isPerfectSquare(ll n)
{

    ll div = sqrt(n);

    return div * div == n;
}

int main()
{

    int n;
    cin >> n;

    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, bool> mp = seive();

    for (int i = 0; i < n; i++)
    {
        if (mp[sqrt(arr[i])] && isPerfectSquare(arr[i]))
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