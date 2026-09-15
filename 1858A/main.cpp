#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long first, second, third;
    cin >> first >> second >> third;

    if (first > second)
    {
        cout << "First"<<endl;
    }
    else if(second > first)
    {
        cout << "Second"<<endl;
    }
    else{
        cout<<(third % 2 ? "First" : "Second")<<endl;
    }
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
