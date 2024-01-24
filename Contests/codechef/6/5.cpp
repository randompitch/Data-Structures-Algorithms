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
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x;  cin >> x;
        int highestBit = 31 - __builtin_clz(x);
        int j = (1 << highestBit) ^ x;
        int i = x ^ j;

        cout << j << " " << i << "\n";
    }

    return 0;
}