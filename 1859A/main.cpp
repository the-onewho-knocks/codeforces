#include <bits/stdc++.h>
using namespace std;
/*
    c[j] must NOT divide b[i]
*/
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> b;
    vector<int> c;

    int mini = *min_element(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
    {
        if (mini == v[i])
        {
            b.push_back(v[i]);
        }
        else
        {
            c.push_back(v[i]);
        }
    }

    if (c.empty())
    {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << '\n';

    for (int x : b)
        cout << x << " ";
    cout << '\n';

    for (int x : c)
        cout << x << " ";
    cout << '\n';
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
//     vector<int> v = {1, 2, 3, 4, 5};
//     vector<int> b;
//     vector<int> c;

//     b.push_back(v[0]); // Safely adds 1 to b
//     c.push_back(v[1]); // Safely adds 2 to c

//     for (int i = 2 ; i < v.size(); ++i)
//     {
//         if (v[i] % c[0] == 0)
//         {
//             c.push_back(v[i]);
//         }
//         else
//         {
//             b.push_back(v[i]);
//         }
//     }

//     for (auto x : b)
//         cout << x;

//     cout<<" "<<endl;

//     for (auto x : c)
//         cout << x ;
// }