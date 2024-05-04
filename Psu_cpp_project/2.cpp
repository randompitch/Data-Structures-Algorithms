#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

typedef long long ll;

void helper(vector<int>& jd, int daysLeft, int idx, vector<vector<int>>& memo) {
    int len = jd.size();
    if (memo[daysLeft][idx] != 0) {
        return;
    }
    if (daysLeft == 1) {
        int num = 0;
        for (int i = idx; i < len; i++) {
            num = max(num, jd[i]);
        }
        memo[daysLeft][idx] = num;
        return;
    }
    int maxDifficulty = jd[idx];
    daysLeft--;
    int stop = len - idx - daysLeft + 1;

    int res = INT_MAX;
    for (int i = 1; i < stop; i++) {
        maxDifficulty = max(maxDifficulty, jd[idx + i - 1]);
        int other = memo[daysLeft][idx + i];
        if (other == 0) {
            helper(jd, daysLeft, idx + i, memo);
            other = memo[daysLeft][idx + i];
        }
        res = min(res, other + maxDifficulty);   
    }
    memo[daysLeft + 1][idx] = res;
}

int minDifficulty(vector<int>& jobDifficulty, int d) {
    int len = jobDifficulty.size();
    if (len < d) {
        return -1;
    }
    vector<vector<int>> memo(d + 1, vector<int>(len, 0));
    helper(jobDifficulty, d, 0, memo);
    
    return memo[d][0];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int d;  cin >> d;
        cout << minDifficulty(v, d) << "\n";
    }

    return 0;
}