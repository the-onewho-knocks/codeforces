#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;

    set<long long> st;

    for(int i = 1 ; i <= n ; ++i){
        long long x;
        cin >> x;

        st.insert(x - i);
    }

    long long maxlen = 0;
    long long current = 0;
    long long previous = INT_MIN;

    for(long long x : st){

        if(x == previous + 1){
            current++;
        }
        else{
            current = 1;
        }

        maxlen = max(maxlen , current);

        previous = x;
    }

    cout<<maxlen<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while(t--)
    solve();

    return 0;
}
