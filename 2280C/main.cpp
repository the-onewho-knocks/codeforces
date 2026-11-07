//not solved
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// void solve(){

// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }

int main()
{
    int n = 5;
    vector<int> v = {5 ,2 ,6, 5 ,3};

    vector<int> u;
    for (int i = 1; i < n; ++i)
    {
        int diff = v[i - 1] - v[i];

        u.push_back(diff);
    }

    for (auto x : u)
        cout << x << " ";
}