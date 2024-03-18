#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];
        int minCandies = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minCandies = min(minCandies, arr[i]);
        }
        int iAte = 0;

        for (int i = 0; i < n; i++)
        {
            iAte += arr[i] - minCandies;
        }
        cout << iAte << endl;
    }
    return 0;
}