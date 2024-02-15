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
        ll n,k;
        cin >> n >> k;
        if(k==(4*n - 2))    cout << k/2 + 1 << "\n";
        else{
            if(k%2 == 0)    cout << k/2 << "\n";
            else            cout << k/2 + 1 << "\n";
        }
    }

    return 0;
}