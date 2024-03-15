#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    priority_queue<int> pq;

    pq.push(n1);
    pq.push(n2);

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        int rev = pq.top();
        pq.pop();
        sum += rev;
        rev = rev - 1;

        pq.push(rev);
    }

    cout << sum;

    return 0;
}