#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int sumfirst = 0;
    int sumsecond = 0;

    int mid = n / 2;

    for (int i = 0; i < mid; ++i)
    {
        sumfirst += v[i];
    }

    for (int i = mid; i < n; ++i)
    {
        sumsecond += v[i];
    }

    if(sumfirst % 2 == 0 && sumsecond % 2 == 0 ||sumfirst % 2 != 0 && sumsecond % 2 != 0 ){
        cout<<"Yes"<<endl;
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
