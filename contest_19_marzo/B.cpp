#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n = 0; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = 1, current = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] <= 2 * a[i]) {
            current++;
        } else {
            res = max(res, current);
            current = 1;
        }
    }
    cout << res << '\n';
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