#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        set<int> st;
        int tmp;

        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            st.insert(tmp);
        }

        int sz = st.size();

        if ((n - sz) % 2 == 0)
        {
            cout << sz << endl;
        }
        else
        {
            cout << (sz - 1) << endl;
        }
    }
    return 0;
}