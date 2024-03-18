#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int tmp;
        cin >> tmp;

        int div = 0;
        if (tmp >= 1900)
        {
            div = 1;
        }
        else if (tmp >= 1600)
        {
            div = 2;
        }
        else if (tmp >= 1400)
        {
            div = 3;
        }
        else
        {
            div = 4;
        }

        cout << "Division " << div << endl;
    }

    return 0;
}