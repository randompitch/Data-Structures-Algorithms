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
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int p = (h+x-1)/x;
        int r = min(k,(h+y1-1)/y1);
        h -= y1*r;
        if(h>0)     r += (h+y2-1)/y2;
        cout << min(p,r) << "\n"; 
    }

    return 0;
}