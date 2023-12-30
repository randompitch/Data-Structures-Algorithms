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
#include <math.h>
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
        ll n;  cin >> n;
        ll sum = 0;
        for(int i=0;i<n;i++){
            int a;  cin >> a;
            sum += a;
        }
        ll k = sqrt(sum);
        if(k*k == sum)  cout << "YES\n";
        else            cout << "NO\n";

    }

    return 0;
}