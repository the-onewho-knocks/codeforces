#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    vector<ll> u(n);

    int veven= 0, vodd = 0;
    int ueven = 0, uodd = 0;
    for (auto &x : v)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            veven++;
        }
        else
        {
            vodd++;
        }
    }

    for (auto &x : u)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            ueven++;
        }
        else
        {
            uodd++;
        }
    }

    if (k % 2 == 0)
    {
        cout << (vodd >= uodd ? "YES" : "NO") << endl;
    }
    else
    {
        cout << (veven >= ueven ? "YES" : "NO") << endl;
    }
}

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     vector<ll> v(n);
//     vector<ll> u(n);

//     for (auto &x : v)
//     {
//         cin >> x;
//     }

//     for (auto &x : u)
//     {
//         cin >> x;
//     }

//     unordered_set<ll> st(u.begin(), u.end());

//     ll count = 0;

//     for (int i = 0; i < n; ++i)
//     {

//         if (st.find(2 * v[i] + k) != st.end() || st.find(v[i] + 2) != st.end() || st.find(v[i] - 2) != st.end())
//         {
//             count++;
//         }
//     }

//     if (count == n)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

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
