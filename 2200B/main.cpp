#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (auto& x : v)
    {
        cin >> x;
    }

    if (is_sorted(v.begin(), v.end()))
    {
        cout << n << endl;
        return;
    }
    else
    {
        cout << 1 << endl;
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
