#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll count = 0;
    char current = 'R';//R //B
    //BRRBR
    for (int i = 0; i < n; ++i)
    {

        if (s[i] != current)
        {
            count++;
            current = s[i];
        }

        if (current == 'R')
        {
            current = 'B';
        }
        else
        {
            current = 'R';
        }
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
