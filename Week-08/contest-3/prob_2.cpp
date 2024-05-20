#include <bits/stdc++.h>
using namespace std;

int main()
{

    // your code goes here

    int t;

    cin >> t;

    while (t--)
    {

        int x, y;
        cin >> x >> y;
        if (x < 1000)
        {

            y -= 1;
            x += 1000;
        }

        if (y == 0)
        {
            cout << x << endl;
        }
        else
        {
            int val = x;

            for (int i = 0; i < y; i++)
            {
                val = val * 2;
            }
            cout << val << endl;
        }
    }
}
