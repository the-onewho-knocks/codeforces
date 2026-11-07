#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n , s;
    cin >> n >> s;

    vector<ll> v(n);
    for(auto& x : v){
        cin >> x;
    }

    unordered_map<ll , ll> mp;

    mp[0] = 1;

    ll ans= 0;
    ll sum = 0;

    for(int i = 0 ; i < n ; ++i){

        sum += v[i];

        ans += mp[sum - s];

        mp[sum]++;
    }

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
