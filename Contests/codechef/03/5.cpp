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

void solve(){
    int n,x;
    cin >> n >> x;
    if(x==0){
        for(int i=1; i<=n; i++){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    if(n-x <= 1 ){
        cout << -1 << "\n";
        return;
    }
    vector<int> ans;
    for(int i=n; i >= x+2; i--) ans.push_back(i);
    for(int i=1; i <= x+1; i++) ans.push_back(i);
    if(ans.size() != n)         cout << "-1" << "\n";
    else{
        for(auto &num :ans){
            cout << num << " ";
        }
        cout << "\n";
    }
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}