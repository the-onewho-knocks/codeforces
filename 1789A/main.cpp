#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
    }

    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
            
            if(gcd(v[i] ,  v[j]) <= 2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }

    cout<<"No"<<endl;

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
