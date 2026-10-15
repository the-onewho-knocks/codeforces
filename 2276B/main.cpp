#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool canincrease = false;
    bool candecrease = false;

    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i - 1] == s[i + 1])
        {
            if (s[i - 1] == s[i])
            {
                canincrease = true;
            }
            else
            {
                candecrease = true;
            }
        }
    }

    cout << 1 + candecrease + canincrease << endl;
}

// void solve()
// {
//     string s;
//     cin >> s;

//     set<string> st;

//     auto compress = [](string s){
//         string result = "";

//         for(auto x : s){
//             if(result.empty() || result.back() != x){
//                 result += x;
//             }
//         }

//         return result;
//     };

//     st.insert(compress(s));
//     int n = s.size();
//     for(int i = 1 ; i < n - 1 ; ++i){
//         string modified = s;
//         modified[i] = (modified[i] == '0' ? '1' : '0');

//         st.insert(compress(modified));
//     }

//     cout<<st.size()<<endl;
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
