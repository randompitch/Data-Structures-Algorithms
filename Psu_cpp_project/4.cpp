#include <iostream>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    k--;
    cout << (k + ((n % 2) * k / (n / 2))) % n + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}