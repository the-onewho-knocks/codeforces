#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a , b ;
    cin>>a>>b;

    transform(a.begin() , a.end() ,a.begin(), ::tolower);
    transform(b.begin() , b.end() ,b.begin(), ::tolower);


    if(a < b)cout<<-1<<endl;
    else if(a > b)cout<<1<<endl;
    else cout<<0<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
