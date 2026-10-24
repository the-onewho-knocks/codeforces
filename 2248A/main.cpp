#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;

    size_t zero = s.find('0');

    if (zero != string::npos)
        s.erase(zero, 1);

    size_t one = s.find('1');

    if (one != string::npos)
        s.erase(one, 1);

    cout << s << endl;
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
