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
 
void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    vector<int> cr1(n+1,0);
    vector<int> cr2(n+1,0);
    vector<int> cr3(n+1,0);
    for(int i=1;i<=n;i++){
        cr1[i] = cr1[i-1] + (a[i] == 1);
        cr2[i] = cr2[i-1] + (a[i] == 2);
        cr3[i] = cr3[i-1] + (a[i] == 3);
    }

    while(q--){
        int l,r;
        cin >> l >> r;
        int m = r-l+1;
        if(m%2 != 0){
            cout << "No\n";
            continue;
        }
        int k = m/2;
        int part = cr1[r] - cr1[l-1];
        int cmplt = cr2[r] - cr2[l-1];
        int whole = cr3[r] - cr3[l-1];
        int cnt = 0;

        if(part >= k)   cnt++;
        if(cmplt >= k)   cnt++;
        if(whole >= k)  cnt++;

        if(part <= k && cmplt <= k && whole <= k && cnt >= 1)    cout << "Yes\n";
        else    cout << "No\n";
    }
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