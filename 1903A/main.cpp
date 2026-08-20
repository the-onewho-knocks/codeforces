#include <bits/stdc++.h>
using namespace std;

/*
first input is the number of testcases
next line 3 is the size of the array and 2 is the length of subarray
which we can reverse in order to make the complete array in the
non decreasing that is acending formate
*/

void solve(){
    int t;
    cin>>t;

    while(t--){
        int length;
        int k;
        cin>>length>>k;

        vector<int> v;
        for(int i = 0 ; i < length ; ++i){
            int a ;
            cin>>a;

            v.push_back(a);
        }

        // if(is_sorted(v.begin() , v.end())){
        //     cout<<"YES"<<endl;
        // }

        // if(equal(v.begin() + 1 , v.end() , v.begin()) && k == 1){
        //     cout<<"YES"<<endl;
        // }

        if(is_sorted(v.begin() , v.end()) || k > 1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
