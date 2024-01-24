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
 
ll choose2(ll n){
    return (n*(n-1))/2;
}

ll choose3(ll n){
    return (n*(n-1)*(n-2))/6;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;  cin >> n;
        vector<ll> v(n+1,0);
        for(ll i=0;i<n;i++){
            ll p;  cin>>p;
            v[p]++;
        }
        ll ans=0, prev=0;
        for(ll i=0; i<=n; i++){
            if(v[i] >= 3)   ans += choose3(v[i]);  
            if(v[i] >= 2)   ans += choose2(v[i])*prev;
            prev += v[i];
        }
        cout << ans << "\n";
    }

    return 0;
}