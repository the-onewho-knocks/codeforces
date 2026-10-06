#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || b == c || c == a)
    {
        cout << 0 << endl;
        return;
    }

    int x = abs(a - b);
    int y = abs( b - c);
    int z = abs(a - c);

    cout<<min({x , y , z})<<endl;
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
