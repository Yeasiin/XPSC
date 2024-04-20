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

        string sb;
        cin >> sb;

        int r = sb.size() - 1;

        string ans;

        for (int i = r; i >= 0; i--)
        {
            if (sb[i] != '0')
            {
                int val = stoi(sb.substr(i, 1));
                ans += (val + 'a' - 1);
            }
            else
            {
                int val = stoi(sb.substr(i - 2, 2));
                ans += (val + 'a' - 1);
                i -= 2;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}