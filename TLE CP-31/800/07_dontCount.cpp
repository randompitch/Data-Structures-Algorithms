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
        int n,m;
        cin >> n >>m;
        string x,s;
        cin >> x >> s;
        int ans = -1;
        for(int i=0; i<9;i++){
            if(x.find(s) != string::npos){
                ans = i;
                break;
            }
            x += x;
        }
        cout << ans << "\n";
    }

    return 0;
}