#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int count = s.size();

    int firstdigit = s[0] - '0';

    int ans = (count - 1) * 9 + firstdigit;

    cout<<ans<<endl;

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
