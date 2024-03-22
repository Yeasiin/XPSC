#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        char currLight;
        int n;
        cin >> n >> currLight;

        string s;
        cin >> s;

        s += s;

        int cnt = 0;
        bool flag = false;

        int sz = s.size() - 1;
        int ans = 0;

        for (int i = sz; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                cnt = 0;
            }

            else if (s[i] == currLight)
            {
                ans = max(ans, cnt);
            }

            cnt++;
        }

        cout << ans << endl;
    }

    return 0;
}