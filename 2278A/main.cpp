#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;

    vector<char> v;

    for (auto x : s)
    {
        v.push_back(x);
    }

    vector<char> z;

    for (auto x : k)
    {
        z.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < z.size(); j++)
        {
            if (v[i] == z[j])
            {
                v.erase(v.begin() + i);
                z.erase(z.begin() + j);

                i--; // Recheck the current position
                break;
            }
        }
    }

    string q(v.begin(), v.end());

    if (q.size() == 3 &&
        q.find('s') != string::npos &&
        q.find('i') != string::npos &&
        q.find('x') != string::npos &&
        z.empty())
    {
        cout << "YES" << endl;
        ;
    }
    else
    {
        cout << "NO" << endl;
    }
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
