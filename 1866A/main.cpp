#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n ; ++i){
        cin>> v[i];
        v[i] = abs(v[i]);
    }

    int small = v[0];
    for(auto x : v){
        small = min(small , x);
    }

    cout<<small<<endl;;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
