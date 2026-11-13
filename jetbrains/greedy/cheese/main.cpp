#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n , weight;
    cin >> n >> weight;

    map<ll , ll , greater<ll>> mp;
    for(int i = 0 ; i < n ; ++i){
        ll a , b;
        cin >> a >> b;

        mp[a] += b;
    }

    ll ans = 0;
    ll c = 0;

    for(auto it = mp.begin() ; it != mp.end() && c < weight ; ++it){
        ll taken = min(it->second , weight - c);
        ans += taken * it->first;
        c += taken;
    }

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
