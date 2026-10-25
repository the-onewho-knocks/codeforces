#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &element : a) cin >> element;
    for (int &element : b) cin >> element;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n < 2 * m) {
        cout << "NO\n";
        return;
    } 

    int i = 0;

    while(i < m && a[i] < b[i] && b[i] < a[n - m + i]){
        i++;
    }
    cout << (i == m ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}