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
    int score = 0;

    while (n < k)
    {
        if (k >= v.size() || (n - k + 1) >= v.size())
            break;

        int s = v[k];
        int a = v[n - k + 1];

        if (s > a)
        {
            score += s;
            v.erase(remove(v.begin(), v.end(), s), v.end());
        }
        else
        {
            score += a;
            v.erase(remove(v.begin(), v.end(), a), v.end());
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
