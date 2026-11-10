//not solved
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, l;
    cin >> n >> l;

    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    ll op = 0;

    for (ll i = 1; i < n; ++i)
    {
        while (1ll * v[i] * v[i - 1] > l)
        {
            if(v[i] < v[i - 1]){
                v[i]--;
                op++;
            }
            else{
                v[i - 1]--;
                op++;
            }
        }
    }

    cout << op << endl;
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
