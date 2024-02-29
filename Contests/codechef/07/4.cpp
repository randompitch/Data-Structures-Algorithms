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

ll solve(int n){
    if(n%2 == 0)     return (n/2) * (n/2 +1);
    else             return ((n/2)*(n/2+1)+(n/2)+1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;  cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}