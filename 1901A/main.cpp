#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {

        int gas;
        int target;

        cin >> gas >> target;

        vector<int> v = {0};
        for (int i = 0; i < gas; ++i)
        {
            int a;
            cin >> a;

            v.push_back(a);
        }
        v.push_back(target);

        // for (auto x : v)
        //     cout << x << endl;

        vector<int> maxi;
        int sum = 0;

        for (int i = 1; i < v.size(); ++i)
        {
            sum = max(sum , v[i] - v[i - 1]);
        }

        int n = v.size();
        // for (auto x : maxi)
        //     cout << x << endl;

        sum = max(sum , (v[n - 1] - v[n - 2]) * 2);

        cout<<sum<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
