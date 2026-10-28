#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &x : v)
        cin >> x;

    if (k == 1)
    {
        cout << -1 << endl;
        return;
    }

    int prefixlen = n - k + 1;

    int maxi = max_element(v.begin() , v.begin() + prefixlen) - v.begin();
    int mini = min_element(v.begin() + prefixlen, v.end()) - v.begin();

    if (v[maxi] > v[mini])
    {
        cout << maxi + 1 << ' ' << mini + 1 << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
