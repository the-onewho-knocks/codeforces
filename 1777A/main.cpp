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

    long long evencount = 0;
    long long oddcount = 0;

    for (int i = 1; i < n; ++i)
    {
        if (v[i - 1] % 2 != 0 && v[i] % 2 != 0)
        {
            oddcount++;
        }
        else if(v[i - 1] % 2 == 0 && v[i] % 2 == 0){
            evencount++;
        }
    }

    cout<<oddcount + evencount<<endl;
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
