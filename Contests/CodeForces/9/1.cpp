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

void solve(){
    ll b,n;
    cin >> b >> n;
    ll prod = 1;
    for(int i=0;i<b;i++){
        ll s; cin >> s;
        prod *= s;
    }
    if(2023 % prod == 0){
        cout << "YES\n";
        cout << 2023/prod << " ";
        for(int i=1;i<n; i++){
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else{
        cout << "NO\n";
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