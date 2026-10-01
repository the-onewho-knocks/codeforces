#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        char target = '0';
        long long count = 0;

        for(int i = 0 ; i<n; i += k){
            string p = s.substr(i , k);
            if(p.find(target) == string::npos){
                count++;
            }
        }

        cout<<count<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
