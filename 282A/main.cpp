#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    int x = 0;

    while (t--)
    {
        string k ;
        cin>>k;

        if(k == "++X" || k == "X++"){
            x++;
        }
        else if(k == "--X" || k == "X--"){
            x--;
        }
    }

    cout<<x<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
