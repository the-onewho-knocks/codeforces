#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w , h;
    cin>> w >> h;

    int s1 , h1;
    cin>>s1 >> h1;
    int s2 , h2;
    cin>>s2 >> h2;

    while(h > 0){
        w += h;

        if(h == h1){
            w -= s1;
        }

        if(h == h2){
            w -= s2;
        }

        if(w < 0){
            w = 0;
        }

        h--;

    }

    cout<<w<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
