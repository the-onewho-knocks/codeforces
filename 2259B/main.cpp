//not solved 

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }
        vector<int> ans;

        for (int val : nums)
        {
            val -= n;
            ans.push_back(abs(val));
        }

        unordered_map<int, int> mp;
        for (auto x : ans)
        {
            mp[x]++;
        }

        auto maxit = max_element(
            mp.begin(), mp.end(), [](auto a, auto b)
            { return a.second < b.second; });

        cout << maxit->second << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
