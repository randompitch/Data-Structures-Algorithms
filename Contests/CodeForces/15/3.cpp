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
#include <math.h>
using namespace std;
 
typedef long long ll;

void fn(){
    ll k,x,a;
    cin >> k >> x >> a;
    if(a <= x){cout << "NO\n"; return;}
    vector<int> v(x+1,0);
    v[0]=1; a--;
    ll un = 1;
    for(int i=1; i<=x; i++){
        int req = ceil(1.0*(un+1)/(k-1));
        a -= req; 
        v[i] = req;
        if(a<0)     {cout << "NO\n"; return;}
        un += req;
    }
    cout << "YES\n";
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
        fn();        
    }

    return 0;
}