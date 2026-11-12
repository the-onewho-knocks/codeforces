//not solved
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    for (ll i = 0; i < n / 2; ++i)
    {
        ll maxi = abs(s[i] - s[n - 1 - i]);
        ans = max(ans, maxi);
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
