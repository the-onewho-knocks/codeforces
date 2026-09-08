#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int size_x, size_s;
    string x, s;

    cin >> size_x >> size_s >> x >> s;

    int count = 0;

    for (int count = 0; count <=  6 ; ++count)
    {
        if (x.find(s) != string::npos)
        {
            cout<<count<<endl;
            return;
        }

        x += x;
    }

    cout<<-1<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

// int main()
// {
//     string x = "a";
//     string s = "aaaaa";
//     unordered_set<string> seen;
//     seen.insert(s);
//     int count = 0;

//     for (int i = 0; i < 5; ++i)
//     {
//         if (x.find(s) != string::npos)
//         {
//             cout << count << endl;
//             break;
//         }
//         x += x;
//         count++;
//     }

//     cout<<-1<<endl;
//     // for(int i = 0 ; i < 5 ; ++i){
//     //     if(x != s){
//     //         x += x;
//     //         count++;
//     //     }
//     // }
//     // for (auto x : seen)
//     //     cout << x << endl;
// }