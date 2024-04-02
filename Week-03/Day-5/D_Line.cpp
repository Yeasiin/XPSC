#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;

    int arr[n];

    ll currSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            v.push_back((n - 1 - i) - i);
            currSum += i;
        }
        else
        {
            v.push_back(i - (n - 1 - i));
            currSum += n - 1 - i;
        }
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            currSum += v[i];
        }
        cout << currSum << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}