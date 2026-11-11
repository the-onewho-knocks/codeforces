#include <iostream>
using namespace std;

void solve()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long S = a + b + c;
    long long full_cycles = n / S; //calc how many cycles completed
    long long rem = n % S; // remaining units or distance from n

    if (rem == 0) 
    {
        cout << full_cycles * 3 << "\n";
    }
    else if (rem <= a)
    {
        cout << full_cycles * 3 + 1 << "\n";
    }
    else if (rem <= a + b)
    {
        cout << full_cycles * 3 + 2 << "\n";
    }
    else
    {
        cout << full_cycles * 3 + 3 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}