// Longest K unique characters substring = > https: // www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here

        map<char, int> mp;

        int r = 0;
        int l = 0;

        int ans = 0;

        int n = s.size();

        while (r < n)
        {

            mp[s[r]]++;

            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {

                while (l < r)
                {

                    if (mp.size() <= k)
                    {
                        break;
                    }

                    if (mp[s[l]] == 1)
                    {
                        auto it = mp.find(s[l]);
                        mp.erase(it);
                    }
                    else
                    {
                        mp[s[l]]--;
                    }
                    l++;
                }

                if (mp.size() == k)
                {
                    ans = max(ans, r - l + 1);
                }
            }

            r++;
        }

        if (ans == 0)
            return -1;

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
