#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n + 1);
    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (k--)
    {
        ll l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l - 1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
