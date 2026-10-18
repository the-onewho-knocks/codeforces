#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    string ans = "zzz";
    int alpha = 26;

    string currstr = "";

    for (int i = 1; i <= alpha; ++i)
    {
        for (int j = 1; j <= alpha; ++j)
        {
            for (int k = 1; k <= alpha; ++k)
            {

                if (i + j + k == n)
                {
                    currstr += char(i + 'a' - 1);
                    currstr += char(j + 'a' - 1);
                    currstr += char(k + 'a' - 1);

                    ans = min(currstr , ans);
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}
