//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    int i = 0;
    int j = K;
    vector<long long> v;
    while (j <= N)
    {
        int tmp = i;
        bool flag = false;

        if ((j - i) <= K)
        {
            while (i < j)
            {
                if (A[i] < 0)
                {
                    flag = true;
                    break;
                }
                i++;
            }
        }

        if (!flag)
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(A[i]);
        }
        if ((j - i) >= K)
        {
            i = tmp + 1;
        }

        j++;
    }
    return v;
}
