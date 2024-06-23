#include <bits/stdc++.h>

using namespace std;

using ll = long long;

multiset<int> st;

int main()
{
    int n, m;
    cin >> n >> m;

    int price[n];

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
        st.insert(price[i]);
    }

    int tmp;

    for (int i = 0; i < m; i++)
    {
        cin >> tmp;

        auto it = st.upper_bound(tmp);

        if (it == st.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            st.erase(it);
        }
    }

    return 0;
}