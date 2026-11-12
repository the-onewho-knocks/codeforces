#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    ll a, b, c;
    cin >> a >> b >> c;

    ll highest = max({a, b, c});
    ll lowest = min({a, b, c});

    int secondHighest = max({min(a, b),
                             min(b, c),
                             min(a, c)});

    highest -= 1;
    lowest += 1;
    if (highest == secondHighest && secondHighest == lowest)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
