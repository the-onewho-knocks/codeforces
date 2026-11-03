#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    ll n;
    cin >> n;

    vector<ll> v(n);
    for(auto& x : v){
        cin >> x ;
    }

    vector<ll> prefix(n);
    prefix[0] = v[0];

    for(ll i = 1 ; i < n ; ++i){
        prefix[i] = prefix[i - 1] + v[i];
    }

    ll maxsum = INT_MIN;
    ll minsum = 0;

    for(int i = 0 ; i < n ; ++i){
        maxsum = max(maxsum , prefix[i] - minsum);
        minsum = min(minsum , prefix[i]);
    }

    cout<<maxsum<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
