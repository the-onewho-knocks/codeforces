#include <bits/stdc++.h>
using namespace std;
/*
The core idea is very simple:

If the array is already unsorted, answer is 0.
If the array is sorted, look at every pair of adjacent elements.
Find the smallest difference (gap) between them.
The smaller the gap, the easier it is to make the array unsorted.
For that smallest gap, the required answer is:
gap / 2 + 1

So essentially:

Find the closest adjacent elements and calculate how much you need to change them to break the sorted order.

*/
void solve()
{
    int n ; 
    cin >> n;

    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
    }

    if(is_sorted(v.begin() , v.end())){
        long long ans = INT_MAX;
        for(int i = 1 ; i < n; ++i){
            long long diff = v[i] - v[i - 1];
            ans = min( ans , diff / 2 + 1 );
        }

        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

