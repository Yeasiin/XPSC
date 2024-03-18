#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    long long sum = 0;

    while (j < m && i < n)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[i];

        while (curr == a[i] && i < n)
        {
            cnt1++;
            i++;
        }

        while (curr > b[j])
        {
            j++;
        }

        while (b[j] == curr && j < m)
        {
            cnt2++;
            j++;
        }

        sum += ((long long)1 * cnt2 * cnt1);
    }
    cout << sum << endl;

    return 0;
}