#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    long long int sSize = s.size();

    long long diff = 0;
    for (long long int i = 0; i < sSize; i++)
    {
        if (s[i] != t[i])
        {
            diff++;
        }
    }
    cout << diff << endl;

    return 0;
}