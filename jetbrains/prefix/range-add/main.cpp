#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> v(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    vector<ll> differenceArray(n + 2);

    for(int i = 1 ; i <= k ; ++i){
        ll l , r , x;
        cin >> l >> r >> x;

        differenceArray[l] += x;
        differenceArray[r + 1] -= x;
    }

    ll runningtotal = 0;
    for(int i = 1 ; i <= n ; ++i){
        runningtotal += differenceArray[i];
        v[i] += runningtotal;

        cout<<v[i]<<" ";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
