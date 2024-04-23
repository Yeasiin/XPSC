#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;

        if (n <= (x + 1) && x != 0)
        {
            cout << -1;
        }
        else
        {

            int start = 1;
            int end = n;

            cout << start << " ";

            for (int i = 2; i <= n; i++)
            {
                if (x > 0)
                {
                    x -= 1;
                    cout << (end -= 1) << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}