#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
5
3 -1 4 0 2
*/

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto& x : v) cin >> x;

    vector<ll> k(n);

    k[0] = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        k[i] = k[i - 1] + v[i];
    }

    for (auto x : k)
        cout << x << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
