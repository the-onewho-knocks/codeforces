#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n > 2 && n % 2 == 0){
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