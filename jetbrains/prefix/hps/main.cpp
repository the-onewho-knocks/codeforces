#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// P P H P S

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<char> s(n);

//     for (auto &x : s)
//     {
//         cin >> x;
//     }

//     vector<char> prefix;
//     vector<char> suffix;

//     for (int i = 0; i < n / 2; ++i)
//     {
//         prefix.push_back(s[i]);
//     }

//     for (int i = n/2; i < n; ++i)
//     {
//         suffix.push_back(s[i]);
//     }

// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    vector<char> a(n);
    for(auto& x : a){
        cin >> x;
    }

    vector<int> pref(n + 1, 0);
    vector<int> suff(n + 1, 0);

    int h = 0, p = 0, s = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'S')
            h++;
        if (a[i] == 'H')
            p++;
        if (a[i] == 'P')
            s++;

        pref[i + 1] = max({h, p, s});
    }

    h = 0 , p = 0 , s = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(a[i] == 'S') h++;
        if(a[i] == 'H') p++;
        if(a[i] == 'P') s++;

        suff[i] = max({h , p , s});
    }

    int ans = 0;

    for(int i = 0 ; i < n ; ++i){
        ans = max(ans , pref[i] + suff[i]);
    }

    cout<<ans<<endl;
}