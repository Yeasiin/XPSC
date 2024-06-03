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

    for (int i = 0; i < n; i++)
    {
        if (isPrime(sqrt(arr[i])) && isPerfectSquare(arr[i]))
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