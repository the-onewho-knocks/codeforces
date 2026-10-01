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

    bool isequal = true;
    for (int i = 1; i < n; ++i)
    {
        if (v[0] != v[i])
        {
            isequal = false;
            break;
        }
    }

    if (isequal)
    {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    cout << v[n - 1] << ' ';
    for (int i = 0; i < n - 1; ++i)
    {
        cout << v[i] << ' ';
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
