// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here

        long long int sum = 0;

        for (int i = 0; i < K; i++)
        {
            sum += Arr[i];
        }

        int l = 0;
        int r = K;

        long long maxi = sum;

        while (r < N)
        {

            sum -= Arr[l];
            sum += Arr[r];

            l++;
            r++;

            maxi = max(maxi, sum);
        }
        return maxi;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
