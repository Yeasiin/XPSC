#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool isRan = false;
        bool isZalMove = true;

        while (true)
        {

            int sz = s.size();
            if (sz < 2)
            {
                if (isZalMove)
                {
                    isZalMove = false;
                }
                else
                {
                    isZalMove = true;
                }

                break;
            }
            for (int i = 0; i < (sz - 1); i++)
            {
                if (s[i] != s[i + 1])
                {
                    isRan = true;
                    if (i == 0)
                    {
                        s = s.substr(i + 2, sz - 2);
                    }
                    else if (i == (sz - 2))
                    {
                        s = s.substr(0, sz - 2);
                    }
                    else
                    {
                        s = s.substr(0, i) + s.substr(i + 2, sz - 2);
                    }
                    break;
                }
            }

            if (s.size() < 2)
            {
                break;
            }

            isZalMove = !isZalMove;

            if (!isRan)
            {
                break;
            }

            isRan = false;
        }

        if (isZalMove)
        {
            cout << "Zlatan\n";
        }
        else
        {
            cout << "Ramos\n";
        }
    }

    return 0;
}