//not solved

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    // 4 2
    // 1 2 3 4
    long long score = 0;

    while (n >= k)
    {
        int s = v[k - 1];
        int a = v[n - k];

        if (s > a)
        {
            score += s;
            v.erase(v.begin() + (k - 1));
        }
        else
        {
            score += a;
            v.erase(v.begin() + (n - k));
        }

        n--;
    }

    cout << score << endl;
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
