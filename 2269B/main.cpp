#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int nextnum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }

    return sum;
}

int main()
{
    vector<int> v = {1 ,7 ,10 ,100};

    for (auto &x : v)
    {
        // Apply nextnum 100 times to each element safely
        for (int i = 0; i < 100; ++i)
        {
            x = nextnum(x);
        }
    }

    for (auto x : v)
        cout << x << ' ';
}

// void solve(){
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for(int i = 0 ; i < n ; ++i){
//         cin >> v[i];

//         for(int k = 0 ; k < 100 ; ++k){
//             v[i] = nextnum(v[i]);
//         }
//     }

//     int count = 0;
//     for(int i = 0 ; i < n ; ++i){
//         for(int j = i + 1 ; j < n ; ++j){
//             if(v[i] == v[j]){
//                 count++;
//             }
//         }
//     }

//     cout<<count<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;

//     while(t--)
//     solve();

//     return 0;
// }
