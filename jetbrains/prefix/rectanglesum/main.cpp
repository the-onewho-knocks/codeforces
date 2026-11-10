#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1, 0));
    vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }

    // building 2D prefix
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            prefix[i][j] = a[i][j] + prefix[i - 1][j] +
                           prefix[i][j - 1] -
                           prefix[i - 1][j - 1];
        }
    }

    while (q--)
    {
        ll r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        ll ans = prefix[r2][c2] - prefix[r1 - 1][c2] - prefix[r2][c1 - 1] + prefix[r1 - 1][c1 - 1];

        cout << ans << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
