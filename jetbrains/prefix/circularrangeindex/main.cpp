#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// the solution was using the difference array so the thing to remeber here is when we have 
//given any ranges like l r x and do some operations the solution pattern is always a difference array
void solve(){

    ll n , m;
    cin >> n >> m;

    vector<ll> v(n + 1);
    for(ll i = 1 ; i <= n ; ++i){
        cin >> v[i];
    }

    vector<ll> diffarr(n + 2 , 0);

    for(ll i = 0 ; i < m; ++i){
        ll l , r , x;
        cin >> l >> r >> x;

        if(l <= r){
            diffarr[l] += x;
            diffarr[r + 1] -= x;
        }
        else{
            diffarr[l] += x;
            diffarr[n + 1] -= x;

            diffarr[1] += x;
            diffarr[r + 1] -= x;
        }
    }

    ll current = 0;
    for(int i = 1 ; i <= n ; ++i ){
        current += diffarr[i];
        v[i] += current;
        cout<<v[i]<<(i == n ? "" : " ");
    }

    cout<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// brute force
//  void solve()
//  {
//      int n, m;
//      cin >> n >> m;

//     vector<ll> v(n + 1);
//     for (int i = 1; i <= n; ++i)
//     {
//         cin >> v[i];
//     }

//     while (m--)
//     {
//         ll l, r, x;
//         cin >> l >> r >> x;

//         if (l > r)
//         {

//             int i = l;
//             int end = r;

//             while (true)
//             {
//                 v[i] += x;
//                 if (i == end)
//                     break;
//                 i = (i % n) + 1;
//             }
//         }
//         else
//         {

//             for (int i = l; i <= r; ++i)
//             {
//                 v[i] += x;
//             }
//         }
//     }

//     for (int i = 1; i <= n; ++i)
//     {
//         cout << v[i] << " ";
//     }
// }
