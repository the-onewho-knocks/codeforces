#include <bits/stdc++.h>
using namespace std;

/*
condition here we have are the ans should be 
less than or equal to n

all the inputs should be creater than k
and we push_back that into an vector then we return
vector.size();


*/

void solve(){
    int n , k;
    cin>>n >> k;

    vector<int> a(n);

    for(int i = 0 ; i < n ; ++i){
            cin>>a[i];
    }

    vector<int> ans;

    for(int i = 0 ; i < a.size() ; ++i){
        if(a[i] >= a[k - 1] && a[i] > 0){
            ans.push_back(a[i]);
        }
    }

    // for(auto x : a){
    //     if(x > a[k - 1]){
    //         ans.push_back(x);
    //     }
    // }

    cout<<ans.size()<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
