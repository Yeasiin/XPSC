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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        char tmp;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;

            for (int j = 0; j < k; j++)
            {
                cin >> tmp;

                if (tmp == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }
                else if (tmp == 'U')
                {
                    arr[i]--;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}