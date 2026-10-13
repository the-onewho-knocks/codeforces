#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i  < n ; ++i){
        cin >> v[i];
    }

    int maxi = *max_element(v.begin() , v.end());
    int mini = *min_element(v.begin() , v.end());

    int x = maxi + 1;

    cout<<x - mini<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}
