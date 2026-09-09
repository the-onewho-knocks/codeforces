#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;

    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    cout << -sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
