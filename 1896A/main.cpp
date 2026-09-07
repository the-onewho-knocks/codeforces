#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        cout<<(v[0] == 1 ? "YES\n" : "NO\n");

        // if (is_sorted(v.begin(), v.end()))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     for (int i = 2; i < v.size(); i += 2)
        //     {
        //         if (v[i - 2] < v[i - 1])
        //         {
        //             swap(v[i - 1], v[i]);
        //         }
        //     }
        // }

        // if (is_sorted(v.begin(), v.end()))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
