#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long a, b, c;

    cin >> a >> b >> c;

    if (a >= b)
    {
        cout << a + c - b << '\n';
    }
    else
    {
        cout << max(b - a, a + c - b) << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
