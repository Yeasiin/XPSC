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

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {

        if (arrA[i] <= arrB[j])
        {
            ans.push_back(arrA[i]);
            i++;
        }
        else
        {
            ans.push_back(arrB[j]);
            j++;
        }
    }

    while (i < n)
    {
        ans.push_back(arrA[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(arrB[j]);
        j++;
    }

    for (int e : ans)
    {
        cout << e << " ";
    }

    return 0;
}