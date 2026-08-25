#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int total = 0;

    for (int i = 1; i < c + 1; ++i)
    {
        total += a * i;
    }

    if (total <= b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << total - b << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
