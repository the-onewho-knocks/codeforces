#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }

    unordered_map<int, int> mp;
    for (auto x : v)
        mp[x]++;

    if (mp.size() > 2)
    {
        cout << "NO" << endl;
    }
    else if (mp.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    { // this case is when there are exactly 2 elements or keys in the map
        auto it = mp.begin();
        int a = it->second;
        int b = (++it)->second;

        cout << (abs(a - b) <= 1 ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
