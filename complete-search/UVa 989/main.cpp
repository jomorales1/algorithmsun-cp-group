#include <bits/stdc++.h>

using namespace std;

int grid[9][9];
vector<pair<int, int>> positions;

void print(int n) {
    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n * n; j++) {
            cout << grid[i][j];
            if (j == n * n - 1) cout << '\n';
            else cout << ' ';
        }
    }
}

bool validate(int n, int x, int y, int value) {
    int limit = n * n;
    for (int i = 0; i < limit; i++) {
        if (grid[i][y] == value)
            return false;
    }
    for (int i = 0; i < limit; i++) {
        if (grid[x][i] == value)
            return false;
    }
    int l1 = (x / n) * n, l2 = (y / n) * n;
    for (int i = l1; i < l1 + n; i++) {
        for (int j = l2; j < l2 + n; j++) {
            if (grid[i][j] == value)
                return false;
        }
    }
    return true;
}

bool process(int n, int current) {
    if (current == positions.size()) {
        print(n);
        return true;
    }
    pair<int, int> pos = positions[current];
    for (int i = 1; i <= n * n; i++) {
        if (validate(n, pos.first, pos.second, i)) {
            grid[pos.first][pos.second] = i;
            if (process(n, current + 1)) return true;
            grid[pos.first][pos.second] = 0;
        }
    }
    return false;
}

void solve(int n) {
    if (n == 1) {
        int value = 1; cin >> value;
        cout << 1 << "\n";
        return;
    }
    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n * n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 0) {
                positions.push_back({i, j});
            }
        }
    }
    if (positions.empty()) {
        print(n); return;
    }
    bool res = process(n, 0);
    if (!res) cout << "NO SOLUTION\n";
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 1, last = 0;
    while (cin >> n) {
        if (last) cout << '\n';
        last = 1;
        solve(n);
        positions.clear();
    }
    return 0;
}