#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int feq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        feq[s[i] - 'a']++;
    }

    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (feq[i] == 0)
        {
            cout << char(i + 'a') << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << "None" << endl;

    return 0;
}