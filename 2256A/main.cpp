#include <bits/stdc++.h>
using namespace std;

/*
two things we have to do here

1) check for the current range that is highest number - smallest number
then we keep that range store in a variable
2) we try to replace the highest number with the sum of other two numbers
in such a way that the sum should be less than the highest number if not we
return that range

*/

void solve()
{

    int t;
    cin >> t;

    while (t--)
    {

        vector<int> v;
        for (int i = 0; i < 3; ++i)
        {
            int k;
            cin >> k;

            v.push_back(k);
        }


        sort(v.begin(), v.end());

        int range = v[2] - v[0];
        int highest = v[0] + v[1]; 

        if (highest > v[2])
        {
            cout << range << endl;
        }
        else if (highest < v[2])
        {
            v[2] = highest;
            range = v[2] - v[0];

            cout << range << endl;
        }
        else{
            cout<<range<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
