#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    if (!(cin >> t))
        return;

    int ans = 0;

    while (t--)
    {
        int a;
        int b;
        int c;

        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
