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

ll gcd(ll a,ll b){
    while(a>0 && b>0){
        if (a>b)    a = a%b;
        else        b = b%a;
    }
    if(a==0)        return b;
    else            return a;
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll upp = lcm(a,b);
        cout << upp*(upp == b ? b/a : 1) << "\n";
    }

    return 0;
}