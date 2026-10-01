#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<int> v = {
        4, 7, 44, 77, 47,
        74, 444, 447, 474, 477,
        744, 747, 774, 777};


    for(auto x : v){
        if(n % x == 0){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;

};

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        solve();

        return 0;
    }
