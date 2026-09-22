#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    long long k;
    cin >> n >> k;

    if (n % 2 == 0 && k % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else if (k % 2 != 0)
    {
        cout << "Yes" << endl;
    }
    else{
        cout<<"No"<<endl;
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
