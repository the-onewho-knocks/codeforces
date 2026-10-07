#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<int> st;
    vector<bool> v(n + 1, false);

    for (int i = 1; i <= n; ++i)
    {

        char c = s[i - 1];

        if (c == '1')
        {
            st.push(i);
        }
        else if (c == '2')
        {
            if (!st.empty())
            {
                int k = st.top();
                st.pop();
                v[k] = true;
            }
            else{
                v[i] = true;
            }
        }
        else if (c == '3')
        {
            v[i] = true;
        }
    }

    vector<int> notprinted;
    for (int i = 1; i <= n; ++i)
    {
        if (!v[i])
        {
            notprinted.push_back(i);
        }
    }

    cout << notprinted.size() << endl;
    for (auto x : notprinted)
    {
        cout << x << ' ';
    }

    cout << '\n';
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
