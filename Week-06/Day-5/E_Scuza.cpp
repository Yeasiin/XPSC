#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        int arrA[a];
        int arrB[b];

        for (int i = 0; i < a; i++)
        {
            cin >> arrA[i];
        }

        for (int i = 0; i < b; i++)
        {
            cin >> arrB[i];
        }

        vector<int> preSum(a);
        vector<int> preMax(a);

        preSum[0] = arrA[0];
        preMax[0] = arrA[0];
        for (int i = 1; i < a; i++)
        {
            preSum[i] = preSum[i - 1] + arrA[i];
            preMax[i] = max(preMax[i - 1], arrA[i]);
        }

        for (int i = 0; i < b; i++)
        {

            int val = arrB[i];

            auto ak = upper_bound(preMax.begin(), preMax.end(), val) - preMax.begin();

            if (val == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ak << endl;
            }
        }
    }
    return 0;
}