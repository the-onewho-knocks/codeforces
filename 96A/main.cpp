#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s ;
    cin>>s;
    int zero_count = 0;
    int one_count = 0;
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i]=='0'){
            zero_count++;
            if(one_count < 7) one_count = 0;
        }
        else{
            one_count++;
            if(zero_count < 7) zero_count = 0;
        }
    }

    if(zero_count >= 7 || one_count >= 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
