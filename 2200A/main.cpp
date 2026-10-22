#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n ;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
    }

    if(v.size() == 1){
        cout<<"1"<<endl;
        return;
    }

    int count = 0;
    for(auto x : v){
        if(x % n == 0){
            count++;
        }
    }

    cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}
