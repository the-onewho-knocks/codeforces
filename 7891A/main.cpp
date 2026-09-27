#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << 1 << endl;
    else
    {
        int j = 0;

        for (int i = 1; i < b; ++i)
        {
            if (a <= b)
            {
                a = a * 3;
                b *= 2;

                j++;
            }
        }

        cout << j << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
