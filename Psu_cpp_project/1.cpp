#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int solution(vector<int> &A, int X, int Y) {
    size_t i = 0;
    ll ans = LLONG_MAX;
    while (i + static_cast<size_t>((X - 1) * Y) < A.size()) {
        ll sum = 0;
        for (size_t p = i; p <= (i + static_cast<size_t>((X - 1) * Y)); p += Y) {
            sum += A[p];
        }
        i++;
        ans = min(sum, ans);
    }
    return static_cast<int>(ans);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int x, y;
        cin >> x >> y;
        int p = solution(v, x, y);
        cout << p << "\n";
    }

    return 0;
}