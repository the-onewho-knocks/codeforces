#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;

    for (auto x : s)
    {
        if (st.size() && st.top() == x)
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;
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
