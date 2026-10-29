#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> a(n);

    for(auto& x : a) cin >> x;

    sort(a.begin() , a.end());

    double radius = max(a[0] , k - a[n - 1]);

    for(int i = 0 ; i < n - 1 ; ++i){
        int gap = a[i+1] - a[i];

        radius = max(radius , gap / 2.0);
    }

    cout<<fixed<<setprecision(10)<<radius<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
