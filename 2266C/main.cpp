//we cant slove this yet

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    if(is_sorted(s.begin() , s.end())){
        cout<<0<<endl;
        return;
    }
    else if(s[0] == '1'){
        int count = 0;
        for(int i = 1 ; i < n ; ++i){
            if(s[i] == '0'){
                count++;
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}
