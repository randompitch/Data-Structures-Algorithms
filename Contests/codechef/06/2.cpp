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
        float p,l;
        cin >> p >> l;
        float check = (l/p)*100;
        if((l/p)*100 >= 75) cout << "YES\n";
        else            cout << "NO\n";
    }

    return 0;
}