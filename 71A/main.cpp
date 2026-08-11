#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() <= 10)
        {
            cout << s << endl;
            continue;
        }

        int a = 0;
        int n = s.size();

        for (int i = 1; i < s.size() - 1; ++i)
        {
            a = i;
        }

        string ans = s[0] + to_string(a) + s[n - 1];

        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// int main(){
//     string s = "localization";
//     int n = s.size();

//     int a = 0;

//     for(int i = 1 ; i < s.size() - 1 ; ++i){
//         a = i;
//     }

//     string ans = s[0] + to_string(a) + s[n - 1];
//     cout<<ans;
// }