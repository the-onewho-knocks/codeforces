#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int sodd = 0, seven = 0;
    int todd = 0, teven = 0;

    for (int i = 0; i < n; ++i)
    {

        if (s[i] == '1')
        {
            if ((i + 1) % 2 == 1)
            {
                sodd++;
            }
            else
            {
                seven++;
            }
        }

        if (t[i] == '1')
        {
            if ((i + 1) % 2 == 1)
            {
                todd++;
            }
            else
            {
                teven++;
            }
        }
    }

    if(sodd == todd && seven == teven){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
