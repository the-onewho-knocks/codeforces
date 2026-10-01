#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    int a , b , c;
    cin >> a >> b >> c;

    int sol = n - min({a , b , c});

    cout<<sol<<endl;
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
