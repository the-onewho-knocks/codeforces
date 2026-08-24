#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    string s;
    cin >> s; // RRRRR

    int count = 0;

    int left = 0;
    for (int right = 1; right < a; ++right)
    {
        if (s[left] == s[right])
        {
            count++;
        }
        left++;
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
