#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;

    string s = to_string(x);
    int digits = s.size();

    int ans = pow(10 , digits) + 1;

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--)
    solve();

    return 0;
}
