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
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i=0;i<n;i++)    cin >> a[i];
        for(ll i=0;i<m;i++)    cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<ll>());
    
        ll aleft = 0, aright = n-1;
        ll bleft = 0, bright = m-1;
        ll ans = 0;
        while(aleft <= aright){
            if(abs(a[aleft]-b[bleft]) > abs(a[aright]-b[bright])){
                ans += abs(a[aleft]-b[bleft]);
                aleft++;
                bleft++;
            }
            else if(abs(a[aleft]-b[bleft]) < abs(a[aright]-b[bright])){
                ans += abs(a[aright]-b[bright]);
                aright--;
                bright--;
            }
            else{
                ans += abs(a[aright]-b[bright]);
                if(a[aleft] > b[aleft]){
                    aright--;
                    bright--;
                }
                else{
                    aleft++;
                    bleft++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}