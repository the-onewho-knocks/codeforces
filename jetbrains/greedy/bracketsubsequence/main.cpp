#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    string s;
    cin >> s;

    ll n = s.size();

    vector<bool> keepit(n , false);
    stack<int> st;

    for(auto x = 0 ; x < n ; ++x){
        if(s[x] == '('){
            st.push(x);
        }
        else if(s[x] == ')' && !st.empty()){
            keepit[st.top()] = true;
            keepit[x] = true;

            st.pop();
        }
    }   

    string ans = "";

    for(int i = 0 ; i < n ; ++i){
        if(keepit[i]){
            ans += s[i];
        }
    }


    cout<<ans.size()<<endl;
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
