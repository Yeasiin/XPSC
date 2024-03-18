#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arrA[n];
    int arrB[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }

    int i = 0;
    int j = 0;
    long long cnt = 0;

    while (j < m)
    {
        while (arrA[i] < arrB[j] && i < n)
        {
            cnt++;
            i++;
        }
        j++;
        cout << cnt << " ";
    }

    return 0;
}