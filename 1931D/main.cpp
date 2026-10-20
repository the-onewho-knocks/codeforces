#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    ll count = 0;

    map<pair<int , int> , ll> ct;
    for(auto ai : v){

        int remX = ai % x;
        int remY = ai % y;

        int needX = (x - remX) % x;

        count += ct[{needX , remY}];

        ct[{remX , remY}]++;
    }

    cout<<count<<endl;

    //this was brurte force approch and TLE at 6th test case
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     for (int j = i + 1; j < v.size(); ++j)
    //     {
    //         if ((v[i] + v[j]) % x == 0 && (v[i] - v[j]) % y == 0)
    //         {
    //             count++;
    //         }
    //     }
    // }

    // cout<<count<<endl;
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
