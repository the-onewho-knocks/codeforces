#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n + 1);
    vector<ll> prefix(n + 1, 0);
    vector<ll> weightedpref(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];

        prefix[i] = prefix[i - 1] + v[i];
        weightedpref[i] = weightedpref[i - 1] + (ll)(i * v[i]);
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        
        ll sum = prefix[r] - prefix[l - 1];
        ll weightedSum = weightedpref[r] - weightedpref[l - 1];

        ll ans = weightedSum - (l - 1) * sum;

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
