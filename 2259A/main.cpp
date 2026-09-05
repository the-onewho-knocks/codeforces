#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int field;
        string s;
        cin >> n >> field >> s;
        int count = 0;

        for (int i = 0; i < s.length(); i += field)
        {
            bool haszero = false;
            for(int j = i ; j < i + field ; ++j ){
                if(s[j] == '0'){
                    haszero = true;
                    break;
                }
            }

            if(!haszero){
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
