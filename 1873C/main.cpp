#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> grid(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }

        int sum = 0;

        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if (grid[i][j] == 'X')
                {
                    int points = min({i , j , 9 - i , 9 - j}) + 1;
                    sum += points;
                }
            }
        }

        cout<<sum<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
