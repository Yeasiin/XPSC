#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int maxN = (1 << 15);

vector<int> pali;

void pre_pali()
{

    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);

        string tmp = s;
        reverse(tmp.begin(), tmp.end());

        if (s == tmp)
        {
            pali.push_back(i);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    pre_pali();
    while (t--)
    {

        int n;
        cin >> n;

        int tmp;

        vector<long long> cnt(maxN), arr;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            cnt[tmp]++;
            arr.push_back(tmp);
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < pali.size(); j++)
            {

                ll curr = (arr[i] ^ pali[j]);
                ans += cnt[curr];
            }
        }

        cout << ans / 2;

        cout << "\n";
    }
    return 0;
}