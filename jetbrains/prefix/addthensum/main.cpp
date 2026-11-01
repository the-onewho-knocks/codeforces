#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    vector<ll> diffarr(n + 2, 0);
    while (m--)
    {
        ll l, r, x;
        cin >> l >> r >> x;

        diffarr[l] += x;
        diffarr[r + 1] -= x;
    }

    ll ok = 0;
    for(int i = 1 ; i <= n ; ++i){
        ok += diffarr[i];
        v[i] += ok;
    }

    vector<ll> prefix(n + 1 , 0);

    for(ll i = 1 ; i <= n; ++i){
        prefix[i] = prefix[i - 1] + v[i];
    }

    while(q--){
        ll l1 , r1;
        cin >> l1 >> r1;

        cout<<prefix[r1] - prefix[l1 - 1] <<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
