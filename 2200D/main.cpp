#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int x , y;
    cin >> x >> y;

    x--;
    y--;

    vector<int> a, b;

    for(int i = 0 ; i < n ; ++i){
        int j;
        cin >> j;

        if(i <= x || i > y){
            a.push_back(j);
        }
        else{
            b.push_back(j);
        }
    }

    if(!b.empty()){
        rotate(b.begin() , min_element(b.begin() , b.end()) , b.end());
    }

    int m = (b.empty() ? -1 : b[0]);
    auto it = a.begin();

    while(it != a.end() && *it < m){
        it++;
    }

    a.insert(it , b.begin() , b.end());

    for(int i = 0 ; i < n ; ++i){
        cout<<a[i]<<" \n"[i == n - 1];
    }
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

