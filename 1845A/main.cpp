#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "Yes\n";
        cout << n << endl;

        for (int i = 0; i < n; ++i)
        {
            cout << 1 << ' ';
        }

        cout << '\n';
    }
    else
    {
        if (k == 1)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "Yes\n";
            cout << n / 2 << "\n";

            for (int i = 0; i < n / 2; ++i)
            {
                cout << 2 << ' ';
            }
            cout << '\n';
        }
        else if (k >= 3)
        {
            cout << "Yes\n";
            cout << 1 + (n - 3) / 2 << '\n';

            cout << 3 << " ";

            for (int i = 0; i < (n - 3) / 2; ++i)
            {
                cout << 2 << ' ';
            }

            cout << '\n';
        }
        else
        {
            cout << "No" << endl;
        }
    }
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
