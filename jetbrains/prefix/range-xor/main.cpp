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
        prefix[i] = prefix[i - 1] ^ v[i];
    }

    while (k--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans = prefix[r] ^ prefix[l - 1];
        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// int main()
// {
//     vector<int> v = {2 ,-3 ,5 ,1 ,4};
//     int n = v.size();
//     int l = 1, r = 3;

//     //zero based indexing is completely wrong here

//     vector<int> prefix(n+ 1, 0);

//     for (int i = 1; i <= n; ++i)
//     {
//         prefix[i] = prefix[i - 1] + v[i - 1];
//     }

//     //prefix[r = 3] = 4
//     //prefix[l = 1 - 1 = 0] = 0

//     //l = 4  , r = 5
//                                                             // 0 1  2 3 4 5
//                                                             // 0 2 -1 4 5 9

//     //prefix[l = 4 - 1 = 3] = 4
//     //prefix[r = 5] = 9

//     //prefix[r] - prefix[l - 1] = 9 - 4 = 5
//     for (auto x : prefix)
//         cout << x << " ";
//     // int ans = 0;
//     // for(int i = l ; i <= r ; ++i){
//     //     ans ^= v[i];
//     // }

//     // cout<<ans<<endl;
// }
