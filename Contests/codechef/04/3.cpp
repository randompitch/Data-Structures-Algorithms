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
    string s;
    cin >> s;
    if(s[0]=='0'){
        cout << "NO\n";
        return;
    }
    ll swipe = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1') swipe = x;
        else{
            swipe--;
            if(swipe<0){
                cout << "NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";

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