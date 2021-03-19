#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n = 0; cin >> n;
    long long even1 = 0, odd1 = 0;
    for (int i = 0; i < n; i++) {
        int value; cin >> value;
        if (value % 2 == 0) {
            even1++;
        } else {
            odd1++;
        }
    }
    int m = 0; cin >> m;
    long long even2 = 0, odd2 = 0;
    for (int i = 0; i < m; i++) {
        int value; cin >> value;
        if (value % 2 == 0) {
            even2++;
        } else {
            odd2++;
        }
    }
    long long res = (even1 * even2) + (odd1 * odd2);
    cout << res << '\n';
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 0; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}