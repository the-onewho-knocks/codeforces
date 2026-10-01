//we cant slove this yet

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = count(s.begin() , s.end() , '0');

    if(s[0] == '1'){
        cout<<zero<<endl;
        return;
    }

    int one = 0;
    int ans = INT_MAX;
     //zero = 4 // one = 1
    //01000
    // 3 , 2 ,1 , 0
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '1'){
            one++;
        }
        else{
            zero--;
        }

        ans = min(ans , one + zero); //3 , 2 , 1
    }

    cout<<ans<<endl;

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
