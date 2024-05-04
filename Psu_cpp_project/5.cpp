#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<unordered_map<int, int>> arr(n + 1);
    while (m--) {
        int g, h, j;
        cin >> g >> h >> j;
        if (!arr[g].count(h) || arr[g][h] > j) {
            arr[g][h] = j;
            arr[h][g] = j;
        }
    }
    int Min = INT_MAX;
    vector<int> l(n + 1, 0);
    while (k--) {
        int q;
        cin >> q;
        l[q] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (l[i] == 1) {
            for (auto it = arr[i].begin(); it != arr[i].end(); ++it) {
                int n = it->first;
                int w = it->second;
                if (!l[n]) {
                    Min = min(w, Min);
                }
            }
        }
    }
    if (Min == INT_MAX) cout << -1;
    else cout << Min;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}