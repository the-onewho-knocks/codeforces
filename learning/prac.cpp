#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto& x : v) cin >> x;

    sort(v.begin() , v.end());
    //1 1 1 2 2 2 2 2 2 2 
    int count = 0;
    // 7 2 3 9
    //2 3 7 9

    int left = 0;
    int right = n - 1;

    while(left <= right){
        if(left != right &&  v[left] + v[right] <= k ){
            left++;
            right--;
        }
        else{
            right--;
        }

        count++;
    }
    cout << count << endl;
}

// int main()
// {
//     int n, m, k;
//     cin >> n >> m >> k;

//     vector<int> v(n);
//     vector<int> p(m);

//     for (auto &x : v)
//         cin >> x;
//     for (auto &x : p)
//         cin >> x;

//     sort(v.begin(), v.end());
//     sort(p.begin(), p.end());

//     int i = 0;
//     int j = 0;
//     int count = 0;

//     while (i < n && j < m)
//     {
//         if (v[i] - k > p[j])
//         {
//             j++;
//         }
//         else if (v[i] + k < p[j])
//         {
//             i++;
//         }
//         else
//         {
//             count++;
//             j++;
//             i++;
//         }
//     }

//     cout << count << endl;
// }

// int main(){
//     int n = 4;
//     int m = 3;
//     int k = 5;

//     vector<int> v = {60 ,45 ,80 ,60}; //desired size of apartments
//     vector<int> x = {30, 60 ,75}; //size of apartments

//     //output = 2

//     //45 , 60 , 60 , 80
//     //30 , 60 , 75

//     sort(v.begin() , v.end());
//     sort(x.begin() , x.end());

//     int i = 0;
//     int j = 0;
//     int count = 0;

//     while(i < n && j < m){
//         if(v[i] - k > x[j]){
//             j++;
//         }
//         else if(v[i] + k < x[j]){
//             i++;
//         }
//         else{
//             i++;
//             j++;
//             count++;
//         }
//     }

//     cout<<count<<endl;
// }

// int count = 0;

// vector<pair<int , int>> a;

// for(int i = 0 ; i < n ; ++i){
//     int plus = v[i] + k; //65
//     int minus = v[i] - k; //55

//     for(int j = 0 ; j < x.size() ; ++j){
//         if(minus <= x[j] && x[j] <= plus){
//             count++;
//             x.erase(x.begin() + j);
//             break;
//         }
//     }

// }

// cout<<count<<endl;

// }