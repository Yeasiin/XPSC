#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    map<char, int> mapForA;
    bool feqCheck(map<char, int> &mapForB, string str, int s, int e)
    {
        int flag = true;
        for (auto it = mapForA.begin(); it != mapForA.end(); it++)
        {
            if (mapForB[it->first] != mapForA[it->first])
            {
                flag = false;
                break;
            }
        }
        return flag;
    }

    int search(string a, string b)
    {
        for (int i = 0; i < a.size(); i++)
        {
            mapForA[a[i]]++;
        }

        int l = 0;
        int r = a.size() - 1;
        int sum = 0;

        map<char, int> mapForB;
        // pre valuing the frequency
        for (int i = l; i <= r; i++)
        {
            mapForB[b[i]]++;
        }

        while (r < b.size())
        {
            bool res = this->feqCheck(mapForB, b, l, r);

            if (res)
            {
                sum++;
            }

            // before going to the next from left decreasing the frequency length
            mapForB[b[l]]--;
            l++;

            r++;
            // after going to the next from right increasing the frequency length
            mapForB[b[r]]++;
        }

        return sum;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
