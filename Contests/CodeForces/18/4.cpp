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
    int n;  cin >> n;
        int mn = INT_MAX;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i] < mn){
                mn = v[i];
            }
        }
        int cnt = count(v.begin(), v.end(), mn);
        if(cnt == 1){
            cout << "YES\n";
            return;
        }
        else{
            for(int i=0;i<n;i++){
                if(v[i]%mn != 0){
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
        return;
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