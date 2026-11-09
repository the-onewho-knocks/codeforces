#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    ll n, k;
    cin >> n >> k;
    ll count = 0;
    ll sum = 0;
    unordered_map<ll, ll> mp;

    mp[0] = 1;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        sum += x;

        int rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }

        if (mp.count(rem))
        {
            count += mp[rem];
        }
        
        mp[rem]++;
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
