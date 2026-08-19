#include <bits/stdc++.h>
using namespace std;

void solve(){

    string a ;
    cin>>a;

    string b ;
    b = a;

    transform(b.begin() , b.end() , b.begin() , ::toupper);

    a[0] = b[0];

    cout<<a<<endl;

}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
