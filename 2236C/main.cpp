#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a , b , x;

    cin >> a >> b >> x;

    int ans = INT_MAX;
    int i = 0;
    while(a != b){

        if(b > a){
            swap(a , b);
        }

        ans = min(ans , abs(a - b) + i);
        a = a / x;
        i++;
    }

    ans = min(ans , i);

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _;
    cin >> _;

    while (_--)
        solve();

    return 0;
}
