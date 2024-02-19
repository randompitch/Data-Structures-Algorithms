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
        int n;  cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int i=0;
        while(i<n){
            if(s[i] == '@'){
                ans++;
                i++;
            }
            else if(s[i] == '.')     i++;
            else{
                if(s[i+1] == '*')   break;
                else                i++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}