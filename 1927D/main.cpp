#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    vector<int> p(n + 1, -1);
    for (int i = 2; i <= n; ++i)
    {
        p[i] = p[i - 1];

        if (v[i] != v[i - 1])
        {
            p[i] = i - 1;
        }
    }

    int k;
    cin >> k;

    while (k--)
    {
        int l, r;
        cin >> l >> r;

        if (p[r] < l)
        {
            cout << "-1 -1"<<endl;;
        }
        else
        {
            cout << p[r] << " " << r<<endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}