#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    long long twocount = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];

        if(v[i] == 2){
            twocount++;
        }
    }

    if(twocount % 2 != 0){
        cout<<-1<<endl;
        return;
    }

    long long req = twocount / 2;
    long long current = 0;

    for(int i = 0 ; i < n - 1; ++i){
        if(v[i] == 2){
            current++;
        }

        if(current == req){
            cout<<i + 1<<endl;
            return;
        }
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
        solve();

    return 0;
}
