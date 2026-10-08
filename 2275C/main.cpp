#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<long long> value(n - 4);

    for (int x = 0; x < n - 4; ++x)
    {
        value[x] = a[x] + a[x + 2] - a[x + 4];
    }

    unordered_map<long long, long long> frequency;

    long long answer = 0;

    for (int x = 0; x < n - 4; ++x)
    {
        answer += frequency[value[x]];

        if (x >= 2 && value[x - 2] == value[x])
        {
            answer--;
        }

        if (x >= 4 && value[x - 4] == value[x])
        {
            answer--;
        }

        frequency[value[x]]++;
    }
    

    cout<<answer<<endl;
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
