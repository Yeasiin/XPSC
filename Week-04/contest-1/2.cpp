#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;

    cin >> t;

    while (t--)
    {

        string a, b;
        cin >> a >> b;

        bool flag = false;

        if (stoi(a) > stoi(b))
        {
            flag = true;
        }
        else
        {
            reverse(a.begin(), a.end());

            if (stoi(a) > stoi(b))
            {
                flag = true;
            }
            else
            {
                reverse(b.begin(), b.end());
                if (stoi(a) > stoi(b))
                {
                    flag = true;
                }
                else
                {
                    reverse(a.begin(), a.end());
                    if (stoi(a) > stoi(b))
                    {
                        flag = true;
                    }
                }
            }
        }

        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
