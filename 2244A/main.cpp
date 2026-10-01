#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    long long ln = 0;
    long long maxi = 0;
    for (auto x : s)
    {
        if (x == '#')
        {
            ln++;
            maxi = max(maxi, ln);
        }

        if (x == '*')
        {
            ln = 0;
        }
    }

    cout << (maxi+1) / 2 << endl;
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
