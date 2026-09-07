//not solved

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '4' && s[i] != '7')
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
