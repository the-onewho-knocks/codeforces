#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> a;
    a.push_back(v[0]);

    for (int i = 1; i < n; ++i)
    {
        if (v[i - 1] > v[i])
        {
            a.push_back(v[i]);
        }

        a.push_back(v[i]);
    }

    cout << a.size() << endl;
    for (auto x : a)
        cout << x << ' ';
    cout << '\n';
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
