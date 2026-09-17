#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n ;
    cin >> n;

    int negativecount = 0;
    for(int i = 0 ; i < n ; ++i){
        int values;
        cin >> values;

        if(values == -1) negativecount++;
    }

    int positivecount = n - negativecount;
    int ans= 0;

    int operations = 0;

    while(negativecount % 2 != 0 || negativecount > positivecount){
        operations++;
        positivecount++;

        negativecount--;
    }

    cout<<operations<<endl;

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
