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
        unordered_set<int> s;
        for(int i=0; i<4; i++){
            int a, b;
            cin >> a >> b;
            s.insert(a);
        }
        auto it = s.begin();
        int n = *it;
        it++;
        int m = *it;
        cout << (n-m)*(n-m) << "\n"; 
    }

    return 0;
}