#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        string aLast = a.substr(a.size() - 1, 1);
        string bLast = b.substr(b.size() - 1, 1);

        if (a == b)
        {
            cout << "=";
        }
        else if (aLast == "S")
        {
            if (bLast != "S")
            {
                cout << "<";
            }
            else
            {
                if (a.length() > b.length())
                {
                    cout << "<";
                }
                else
                {
                    cout << ">";
                }
            }
        }
        else if (aLast == "L")
        {
            if (bLast == "S" || bLast == "M")
            {
                cout << ">";
            }
            else
            {
                if (a.length() < b.length())
                {
                    cout << "<";
                }
                else
                {
                    cout << ">";
                }
            }
        }
        else if (aLast == "M")
        {
            if (bLast == "S")
            {
                cout << ">";
            }
            else if (bLast == "L")
            {
                cout << "<";
            }
        }
        cout << endl;
    }

    return 0;
}