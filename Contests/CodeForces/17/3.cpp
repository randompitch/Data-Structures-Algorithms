#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <limits.h>
using namespace std;
 
typedef long long ll;

vector<int> sol(200010,0);

void precalculate() {
    for (int i = 1; i < 200010; i++) {
        int sum = 0;
        int n = i;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        sol[i] = sol[i-1] + sum;
    }
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precalculate();

    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        cout << sol[n] << "\n";
    }

    return 0;
}