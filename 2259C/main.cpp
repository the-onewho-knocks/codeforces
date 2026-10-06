#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == -1)
        {
            v[i] = 1;
        }

        if (v[i] == 1)
            break;
    }

    for (int i = n - 1; i > -1; --i)
    {
        if (v[i] == -1)
        {
            v[i] = 1;
        }

        if (v[i] == 1)
            break;
    }

    for(int i = 0 ; i < n ; ++i){
        if(v[i] == -1){
            v[i] = 0;
        }
    }

    for(int i = 0 ; i < n ; ++i) cout<<v[i]<<' ';
    cout<<'\n';
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
