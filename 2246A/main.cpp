#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 1 ; i <= n ; ++i){
        v.push_back(i);
    }

    vector<int> even;
    vector<int> odd;

    for(auto x : v){
        if(x % 2 == 0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < even.size() && j < odd.size()){
        ans.push_back(even[i++]);
        ans.push_back(odd[j++]);
    }

    for(auto x : ans) cout<<x<<" ";
    cout<<"\n";

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
