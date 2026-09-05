#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // int t ;
    // cin>>t;

    // while(t --){
        int n = 3;
        string s = "abb";

        cin>>n>>s;

        int block = 1;

        for(int i = 1 ; i < n ; ++i){
            if(s[i - 1] != s[i]){
                block++;
            }
        }

        int best = 0;

        for(int i = 1 ; i < n - 1 ; ++i){
            if(s[i - 1] != s[i] && s[i+1] != s[i]){

                if(s[i - 1] == s[i + 1]){
                    best = max(best , 2);
                }
                else{
                    best = max(best , 1);
                }
            }
        }
        cout<<block<<endl;
        cout<<best<<endl;
     //   cout<<block - best<<endl;
    //}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
