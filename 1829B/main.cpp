#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>v[i];
    }

    string s;
    for(auto x : v){
        s += to_string(x);
    }

    int count = 0;
    int c = 0;

    for(auto x : s){
        if(x == '0'){
            c++;
            count = max(count , c);
        }
        else if(x == '1'){
            c = 0;
        }
    }

    cout<<count<<endl;

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