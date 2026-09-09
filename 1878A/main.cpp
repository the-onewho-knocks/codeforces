#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n = 5;
//     int k = 4;
//     vector<int> v = {1, 4, 3, 4, 1};

//     unordered_set<int> st(v.begin(), v.end());

//     for (auto x : st)
//         cout << x << endl;

//     if (st.find(k) != st.end())
//     {
//         cout << "yes" << endl;
//     }
//     else
//     {

//         cout << "NO" << endl;
//     }
// }

void solve()
{
    int n , k;
    cin >> n >>  k;

    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>v[i];
    }

    // unordered_map<int , int> mp;
    // for(auto x : v) mp[x]++;

    // for( auto &[value , index] : mp){
    //     if(value == k && index >= 1){
    //         cout<<"YES"<<endl;
    //     }
    // }

  //  cout<<"NO"<<endl;

    unordered_set<int> st(v.begin() , v.end());

    if(st.contains(k)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return 0;
}
