#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long odd = 0;
    long long divisibleByFour = 0;
    long long remainderTwo = 0;

    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        
        if (x % 2 != 0)
        {
            odd++;
        }
        else if (x % 4 == 0)
        {
            divisibleByFour++;
        }
        else
        {
            remainderTwo++;
        }
    }

    cout<<max({odd , divisibleByFour , remainderTwo})<<endl;
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
