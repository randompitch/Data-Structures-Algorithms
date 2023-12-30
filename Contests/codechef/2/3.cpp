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
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin >> v[i];
        vector<int> dp(n);
        dp[0] = v[0];
        for(int i=1;i<n;i++){
            if(v[i] > dp[i-1]){
                dp[i] = v[i];
            }
            else{
                dp[i] = dp[i-1];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(dp[i] > v[i])    ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}