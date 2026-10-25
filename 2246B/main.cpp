
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

        if (n == 2)
        {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> a = {1};

        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }

        a.push_back(2);
        a.push_back(3);

        long long sum = 6;

        while (a.size() < n)
        {
            a.push_back(sum);
            sum *= 2;
        }

        for (long long x : a)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}
