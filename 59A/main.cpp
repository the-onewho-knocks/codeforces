#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string k = s;
    int lowercount = 0;
    int uppercount = 0;

    for(auto x : s){
        char c = x;
        if(islower(c)){
            lowercount++;
        }
        else{
            uppercount++;
        }
    }

    if(lowercount > uppercount){
        transform(k.begin() , k.end() , k.begin() , [](char c){
            return tolower(c);
        });
    }
    else if(lowercount < uppercount){
        transform(k.begin() , k.end() , k.begin() , [](char c){
            return toupper(c);
        });
    }
    else{
        transform(k.begin() , k.end() , k.begin() , [](char c){
            return tolower(c);
        });
    }

    cout<<k<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
