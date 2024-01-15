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
        ll n,f,a,b;
        cin >> n >> f >> a >> b;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)    cin >> vec[i];
        ll mn, pre = 0;
        for(int i=0;i<n;i++){
            mn = min(b,abs(vec[i]-pre)*a);
            f -= mn;
            pre = vec[i];
        }
        if(f>0) cout << "YES\n";
        else    cout << "NO\n";
    }

    return 0;
}