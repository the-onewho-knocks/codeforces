#include <bits/stdc++.h>
using namespace std;

/*
we need a max count variable which will we used after every iteration
how do we check
a = the number of passanger that exit the tram
b = the number of passanger that enter the tram

so we create a maxi variable which will store the count at the tram moves

a= 0
b = 3

count = 0 - 3 = 3

a = 2
b = 5

current = count - a
          3 - 2 = 1

total_maxi = 5 + 1 = 6


i think we can use stack
we will b - a = 3 - 0 = 3
3 in stack
now stack.top() = 3 , a = 2
count = 3 - 2 = 1;
count = count + b
maxi = max(maxi , count )

*/

void solve()
{

    int t;
    cin >> t;

    int current = 0;
    int maxi = 0;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        current = current - a + b;
        maxi = max(maxi, current);
    }

    cout << maxi << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// int main()
// {
//     vector<pair<int, int>> v = {{0, 3}, {2, 5}, {4, 2}, {4, 0}};
//     stack<int> st; //3
//     int maxi = INT_FAST8_MAX;
//     for (int i = 0; i < 3; ++i)
//     {

//         if (st.empty())
//         {
//             st.push(v[i].second);
//         }

//         int current = st.top() - v[i + 1].first; //3 - 0
//         int count = v[i + 1].second + current; //3 + 3

//         maxi = min(maxi, count);
//     }

//     cout << maxi << endl;
// }
