#include <bits/stdc++.h>

using namespace std;

void solve() {
    int m; cin >> m;
    if (m % 5 == 0) {
        cout << 0 << '\n';
    } else {
        cout << 5 << '\n';
        for (int i = 5 * m; i <= 5 * m + 4; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}