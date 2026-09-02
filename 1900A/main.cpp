#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t ;
    cin>>t;
    while(t--){

        int n ;
        string s;

        cin>>n>>s;

        if(s.find("...") != string::npos){
            cout<<2<<endl;
        }
        else{
            int ans = 0;
            for(char c : s){
                if(c == '.'){
                    ans += 1;
                }
            }

            cout<<ans<<endl;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
