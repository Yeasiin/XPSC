#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    set<int> st;
    int strt = 0;

    for (int i = 0; i < n; i++)
    {
        while (st.count(arr[i]))
        {
            st.erase(arr[strt]);
            strt++;
        }
        st.insert(arr[i]);
        ans = max(ans, (int)st.size());
    }
    cout << ans << endl;

    return 0;
}