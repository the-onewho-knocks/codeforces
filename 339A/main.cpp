#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a ;
    cin >> a;

    sort(a.begin() , a.end());

    string b = "";
    for(auto x : a) if(isalnum(x)) b+=x;

    for(int i = 0 ; i < b.size() ; ++i){
        cout<<b[i];
        if(i < b.size() - 1){
            cout<<"+";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
