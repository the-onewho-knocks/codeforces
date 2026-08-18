#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    set<char> unique(s.begin() , s.end());

    int n = unique.size();

    if(n % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
