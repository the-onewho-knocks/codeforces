#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n , k;
    cin >> n >> k;

    vector<ll> v(n + 1);
    vector<ll> prefix(n+1 , 0);

    for(int i = 1 ; i <= n ; ++i){
        cin >> v[i];
        prefix[i] = prefix[i - 1] ^ v[i - 1];
    }

    while(k--){
        int l , r;
        cin >> l >> r;

        ll ans = prefix[r -1] ^ prefix[ l ];
        cout<<ans<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// int main(){
//     vector<int> v = {0 , 1 ,2, 3 ,2 ,1};
//     int n = v.size();
//     int l = 1 , r = 3;  

//     vector<int> prefix(n+1 , 0);

//     for(int i = 1 ; i <= n ; ++i){
//         prefix[i] = prefix[i - 1] ^ v[i - 1];
//     }

//     for(auto x : prefix) cout<<x<<" ";
//     // int ans = 0;
//     // for(int i = l ; i <= r ; ++i){
//     //     ans ^= v[i];
//     // }

//     // cout<<ans<<endl;
// }
