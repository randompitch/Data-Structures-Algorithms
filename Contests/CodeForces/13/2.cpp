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
        int n,x;
        cin >> x >> n;
        int as = x/n;
        set<int> s;
        for(int i=1; i*i <= x; i++){
            if(x%i == 0){
                s.insert(i);
                s.insert(x/i);
            }
        }
        auto it = s.lower_bound(as);
        if(*it > as) it--;
        cout << *it << "\n";
    }

    return 0;
}