#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long x = 0;

    for (long long i = 0; i < n; ++i)
    {
        int v;
        cin >> v;

        x ^= v;
    }

    if (n % 2 == 1)
    {
        cout << x << endl;
    }
    else
    {
        cout << (x == 0 ? 0 : -1) << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
