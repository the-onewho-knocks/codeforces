#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    long long sum = 0;
    bool possible = true;

    for (int i = 1; i <= n; ++i)
    {
        // 8 2 8 1 8
        long long books;
        cin >> books;

        sum += books;

        long long needed = 1LL * i * (i + 1) / 2;

        if (sum < needed)
        {
            possible = false;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
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
